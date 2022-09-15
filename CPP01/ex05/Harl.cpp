/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:52:45 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/15 15:30:51 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "Error type : [DEBUG]" << std::endl;
}

void Harl::info()
{
	std::cout << "Error type : [INFO]" << std::endl;
}

void Harl::warning()
{
	std::cout << "Error type : [WARNING]" << std::endl;
}

void Harl::error()
{
	std::cout << "Error type : [ERROR]" << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	
	std::string tab[4] = {"Debug", "Info", "Warning", "Error"};

	void (Harl::*fun[4])() ={
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	while (i < 4)
	{
		if (tab[i] == level)
			(this->*fun[i])();
		i++;
	}
}

