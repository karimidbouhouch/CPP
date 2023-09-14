/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:34:19 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/03/30 17:06:58 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int  check_date_valid(std::string date)
{
    if (date.length() > 10 || date.length() < 10)
        return false;
        
    int year = std::stod(date.substr(0, 4));
    int month = std::stod(date.substr(5, 7));
    int day = std::stod(date.substr(8, 10));

    if (year > 2023 || year < 2009)
        return false;
    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31)
        return false;
    
    if (month == 2)
    {
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
            return (day <= 29);
        else
            return (day <= 28);
    }
    
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return (day <= 30);

    return true;
}

std::map<std::string, double> fill_data_to_map(std::map<std::string, double> data)
{
    std::ifstream data_file;
    data_file.open("data.csv");
    std::string str;

    size_t pos;
    if (data_file.is_open())
    {
        std::getline(data_file, str);
        while (std::getline(data_file, str))
        {
            pos = str.find(",");
            data.insert(std::make_pair(str.substr(0, pos), std::stod(str.substr(pos + 1, str.length() - pos))));
        }
    }
    else
    {
        std::cout << "Error: could not open data file.\n";
        exit(0);
    }
    return data;
}

void ft_errors(int nb, std::string str)
{
    if (nb == 1)
        std::cout << "Error: not a positive number.\n";
    else if (nb == 2)
        std::cout << "Error: too large a number.\n";
    else if (nb == 3)
        std::cout << "Error: bad input => "<< str << "\n";
    else if (nb == 4)
        std::cout << "Error: syntax error\n";
    else
        std::cout << "Error: could not open file.\n";
}

void    ft_bitcoin_exchange(std::string file)
{
    std::map<std::string, double> data;
    data = fill_data_to_map(data);
    
    size_t          pos;
    std::string     date;
    double          value;
    std::string     value_s;
    std::ifstream   input;
    std::string     s;
    std::map<std::string, double>::iterator it_data;

    input.open(file);
    if (input.is_open())
    {
        std::getline(input, s);
        if (s == "date | value")
        {
            while (std::getline(input, s))
            {
                pos = s.find("|");
                if (s[0] == '\0' || s[0] == '|' || s[s.length() - 1] == '|')
                    ft_errors(3, s);
                else 
                {
                    date = s.substr(0, pos - 1);
                    value_s = s.substr(pos + 2, s.length() - pos);
                    int v = 0;
                    for (int i = 0; i < (int)value_s.length(); i++)
                    {
                        if (!(isdigit(value_s[i]) || (value_s[i] == '.' && v == 0) || value_s[0] == '-') || value_s[0] == '.' || value_s[value_s.length() - 1] == '.')
                        {
                            v = -1;
                            break;
                        }
                        if (value_s[i] == '.')
                            v++;
                    }
                    if (date.empty() || value_s.empty() || pos == std::string::npos || v == -1)
                        ft_errors(3, s);
                    else
                    {
                        value = std::stod(value_s);
                        it_data = data.lower_bound(date);
                        if (it_data->first != date)
                            it_data--;
                        if (pos != std::string::npos && (value >= 0 && value <= 1000) && check_date_valid(date))
                        {
                            std::cout << date << " => " << value << " = " << value * it_data->second << "\n";
                        }
                        else 
                        {
                            if (value < 0)
                                ft_errors(1, s);
                            else if (value > 1000)
                                ft_errors(2, s);
                            else if (!check_date_valid(date))
                                ft_errors(3, s);
                        }
                    }
                }
            }
        }
        else 
            ft_errors(4, "");
    }
    else
        ft_errors(0, "");
}
