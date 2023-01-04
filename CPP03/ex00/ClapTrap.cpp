/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:55:27 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/04 20:04:52 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
	std::cout << "Default constructor called" << std::endl;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "Name constructor called" << std::endl;
	this->name = Name;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (Hit_points && Energy_points)
	{
		std::cout << this->name << " attacks " << target << " causing " << this->Attack_damage << " points of damage!" << std::endl;
		Energy_points -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (Hit_points && Energy_points)
	{
		Hit_points -= (Hit_points >= amount ? amount : Hit_points);
		std::cout << "ClapTrap : " << this->name << " take Damage " << amount << std::endl;
		std::cout << "ClapTrap : " << this->name << " Hit points : " << Hit_points << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (Hit_points && Energy_points)
	{
		this->Hit_points += amount;
		std::cout << "ClapTrap : " << this->name << " be repaired " << amount << std::endl;
		std::cout << "ClapTrap : " << this->name << " Hit points : " << Hit_points << std::endl;
		Energy_points -= 1;
	}
}
