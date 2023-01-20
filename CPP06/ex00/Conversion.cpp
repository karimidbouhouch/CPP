/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 01:40:35 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/20 02:51:21 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(){}

Conversion::~Conversion(){}

Conversion::Conversion(std::string value)
{
    std::stringstream ss;
    
    
    toChar(value);
    toInt(value);
    toFloat(value);
    toDouble(value);
}

bool IsDigitString(const std::string& str) {
  return std::all_of(str.begin(), str.end(), ::isdigit);
}

void Conversion::toChar(std::string value)
{

    std::stringstream ss;
    int i = 0;

    ss << value;
    ss >> i;
    try
	{
		if (isprint(i) == true)
			std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	catch(...)
	{
		std::cerr << "char: impossible" << std::endl;
	}
}


void Conversion::toDouble(std::string value)
{
    (void) value;
    std::cerr << "double: " << '\n';
}

void Conversion::toFloat(std::string value)
{
    try
    {
        std::stringstream ss;
        float i = 0;

        // if(IsDigitString(value)) throw std::invalid_argument("int: impossible");

        ss << value;
        ss >> i;
        std::cout << "float: " << static_cast<float>(i) << '\n';
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Conversion::toInt(std::string value)
{
    try
    {
        std::stringstream ss;
        int i = 0;

        ss << value;
        ss >> i;
        std::cout << "int: " << static_cast<int>(i) << '\n';
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}