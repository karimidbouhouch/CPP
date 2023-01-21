/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 01:40:35 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/21 01:48:32 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <iomanip>
#include <cstring>
#include <cctype>


Conversion::Conversion(){}

Conversion::~Conversion(){}

int ft_strlen(std::string str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
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
    if (ft_strlen(value) == 1 && isalpha(value[0]))
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
        int i = 0;
        i = std::stof(value);
        if(i > INT32_MIN)
        {
            if (isprint(i) == true)
                std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
        }
        else 
		    std::cout << "char: impossible" << std::endl;
	}
	catch(...)
	{
		std::cerr << "char: impossible" << std::endl;
	}
}

void Conversion::toInt(std::string value)
{
    try
    {
        int i = 0;
        i = std::stof(value);
        if (i > INT32_MIN)
            std::cout << "int: " << static_cast<int>(i) << '\n';
        else
            std::cout << "int: impossible" << '\n';
    }
    catch(std::exception &e)
    {
        std::cerr << "int: impossible" << '\n';
    }
}

void Conversion::toFloat(std::string value)
{
    try
    {
        float i = 0;
        i = std::stof(value);
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << '\n';
    }
    catch(...)
    {
        std::cerr << "float: nanf" << '\n';
    }
}

void Conversion::toDouble(std::string value)
{
    try
    {
        double i = 0;
        i = std::stof(value);
        std::cout << "double: " << static_cast<double>(i) << '\n';
    }
    catch(...)
    {
        std::cerr << "double: nan" << '\n';
    }
}