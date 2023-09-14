/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:23:37 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/03/31 17:31:09 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int ft_skip_space(std::string str, int i)
{
    int t = i;
    while (str[i] == ' ')
        i++;
    if (str[i - 1] == ' ' && i == (int)str.size())
        return t;
    return i;
}

int index_last_char(std::string str)
{
    int i = str.size() - 1;
    while (str[i] == ' ')
        i--;
    return i;
}

bool check_double_opr(std::string str)
{
    int i = 0;
    if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*')
    {
        i++;
        while (str[i] == ' ')
            i++;
        if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*')
            return false;
    }
    return true;
}

bool check_first_elements(std::string str, int i)
{
    if (!isdigit(str[i]))
        return false;
    i++;
    i = ft_skip_space(str, i);
    if (!isdigit(str[i]))
        return false;
    return true;
}

void RPN(std::string str)
{
    int i = 0, j = 0;
    std::stack<int> data;
    std::string opr = "+-/*";
    
    while (i < index_last_char(str))
    {
        i = ft_skip_space(str, i);
        if (j == 0)
        {
            if (!check_first_elements(str, i))
            {
                std::cout << "Error\n";
                exit(0);
            }
            j = 1;
        }

        if ((isdigit(str[i]) || opr.find(str[i]) != std::string::npos))
        {
            if (isdigit(str[i]))
                data.push((char)str[i] - '0');
            else
            {
                int nb1 = 0, nb2 = 0;
                int idx1 = 0, idx2 = 0;
                if(!data.empty())
                {
                    idx1 = 1;
                    nb1 = data.top();
                    data.pop();
                }
                if(!data.empty())
                {
                    idx2 = 1;
                    nb2 = data.top();
                    data.pop();
                }
                if (str[i] == '*' && idx1 && idx2)
                    data.push(nb2 * nb1);
                else if (str[i] == '-' && idx1 && idx2)
                    data.push(nb2 - nb1);
                else if (str[i] == '+' && idx1 && idx2)
                    data.push(nb2 + nb1);
                else if (str[i] == '/' && idx1 && idx2)
                {
                    if (nb1 != 0)
                        data.push(nb2 / nb1);
                    else
                    {
                        std::cout << "Error\n";
                        return ;
                    }
                }
                else
                {
                    std::cout << "Error\n";
                    return ;
                }
            }
        }
        else 
        {
            std::cout << "Error\n";
            return ;
        }
        i++;
    }

    if (data.size() == 1)
        std::cout << data.top() << "\n";
    else 
        std::cout << "Error\n";
}
