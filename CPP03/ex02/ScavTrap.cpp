/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 23:48:28 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/05 22:25:37 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	this->name = name;
	std::cout << "ScavTrap Name constructor " << name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& scav)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
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
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	this->name = scav.name;
	this->Attack_damage = scav.Attack_damage;
	this->Energy_points = scav.Energy_points;
	this->Hit_points = scav.Hit_points;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}
