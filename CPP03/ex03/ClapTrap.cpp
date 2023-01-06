/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:55:27 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/05 22:21:34 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "ClapTrap Name constructor called" << std::endl;
	this->name = Name;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& clap)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	this->name = clap.name;
	this->Hit_points = clap.Hit_points;
	this->Energy_points = clap.Energy_points;
	this->Attack_damage = clap.Attack_damage;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& clap)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &clap) {
		this->name = clap.name;
		this->Hit_points = clap.Hit_points;
		this->Energy_points = clap.Energy_points;
		this->Attack_damage = clap.Attack_damage;
	}	
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (Hit_points && Energy_points)
	{
		std::cout << "ClapTrap "<< this->name << " attacks " << target << " causing " << this->Attack_damage << " points of damage!" << std::endl;
		Energy_points -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (Hit_points && Energy_points)
	{
		Hit_points -= (Hit_points >= amount ? amount : Hit_points);
		std::cout << "ClapTrap " << this->name << " take Damage " << amount << std::endl;
		std::cout << "ClapTrap " << this->name << " Hit points : " << Hit_points << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (Hit_points && Energy_points)
	{
		this->Hit_points += amount;
		std::cout << "ClapTrap " << this->name << " be repaired " << amount << std::endl;
		std::cout << "ClapTrap " << this->name << " Hit points : " << Hit_points << std::endl;
		Energy_points -= 1;
	}
}

ClapTrap::ClapTrap(std::string name, unsigned int Hit_points, unsigned int Energy_points, unsigned int Attack_damage)
{
	this->name = name;
	this->Hit_points = Hit_points;
	this->Energy_points = Energy_points;
	this->Attack_damage = Attack_damage;
}
