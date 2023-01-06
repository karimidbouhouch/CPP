/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 23:48:28 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/06 17:49:05 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	std::cout << "ScavTrap Name constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor" << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& scav)
{
	std::cout << "ScavTrap Copy assignment operator" << std::endl;
	if (this != &scav)
	{
		this->name = scav.name;
		this->Attack_damage = scav.Attack_damage;
		this->Energy_points = scav.Energy_points;
		this->Hit_points = scav.Hit_points;
	}
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap& scav)
{
	std::cout << "ScavTrap Copy constructor" << std::endl;
	this->name = scav.name;
	this->Attack_damage = scav.Attack_damage;
	this->Energy_points = scav.Energy_points;
	this->Hit_points = scav.Hit_points;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}
