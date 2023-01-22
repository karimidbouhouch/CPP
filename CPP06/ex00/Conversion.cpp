/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 01:40:35 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/22 22:37:07 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <iomanip>

Conversion::Conversion(){}

Conversion::~Conversion(){}

bool isDigitString(std::string str) 
{
    for (std::string::size_type i = 0; i < str.length(); i++) {
        if (!((str[i] >= '0' && str[i] <= '9') || str[i] == '.' || str[0] == '-')) 
        {
            if (i == str.length() - 1 && str[i] == 'f')
                return true;
            return false;
        }
    }
    return true;
}

void Conversion::charTo(std::string value)
{
    std::cout << "char: " << static_cast<char>(value[0]) << std::endl;
    std::cout << "int: " << static_cast<int>(value[0]) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value[0]) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(value[0]) << std::endl;
}

Conversion::Conversion(std::string value)
{
    if (value.length() == 1 && isprint(value[0]) && !(value[0] >= '0' && value[0] <= '9'))
    {
        charTo(value);
    }
    else
    {
        toChar(value);
        toInt(value);
        toFloat(value);
        toDouble(value);
    }
}

void Conversion::toChar(std::string value)
{
    try
	{
        if (isDigitString(value))
        {
            int i = 0;
            i = std::stof(value);
            if (isprint(i) == true)
                std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
        }
        else 
        {
            std::cout << "char: impossible" << '\n';
        }
	}
	catch(...)
	{
		std::cout << "char: impossible" << std::endl;
	}
}

void Conversion::toInt(std::string value)
{
    try
    {
        if (isDigitString(value))
        {
            int i = 0;
            i = std::stoi(value);
            std::cout << "int: " << static_cast<int>(i) <<'\n';
        }
        else 
        {
            std::cout << "int: impossible" << '\n';
        }
    }
    catch(std::exception &e)
    {
        std::cout << "int: impossible" << '\n';
    }
}

void Conversion::toFloat(std::string value)
{
    try
    {
        if (isDigitString(value) || (value == "-inff" || value == "-inf" || value == "+inf" || value == "+inff"))
        {
            float i = 0;
            i = std::stof(value);            
            std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << '\n';
        }
        else 
        {
            std::cout << "float: nanf" << '\n';
        }
    }
    catch(...)
    {
        std::cout << "float: nanf" << '\n';
    }
}

void Conversion::toDouble(std::string value)
{
    try
    {
        if (isDigitString(value) || (value == "-inff" || value == "-inf" || value == "+inf" || value == "+inff"))
        {
            double i = 0;
            i = std::stof(value);
            std::cout << "double: " << static_cast<double>(i) << '\n';
        }
        else 
        {
            std::cout << "double: nan" << '\n';
        }
    }
    catch(...)
    {
        std::cout << "double: nan" << '\n';
    }
}