/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 22:18:50 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/15 00:49:59 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "Error type : DEBUG" << std::endl;
}

void Harl::info()
{
	std::cout << "Error type : INFO" << std::endl;
}

void Harl::warning()
{
	std::cout << "Error type : WARNING" << std::endl;
}

void Harl::error()
{
	std::cout << "Error type : ERROR" << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	
	std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (i < 4)
	{
		if (tab[i] == level)
			break;
		i++;
	}

	switch (i)
	{
		case 0:
			Harl::debug();
			break;
		case 1:
			Harl::info();
			break;
		case 2:
			Harl::warning();
			break;
		case 3:
			Harl::error();
			break;
	}
}