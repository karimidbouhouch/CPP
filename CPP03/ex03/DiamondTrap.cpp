/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 00:49:11 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/06 19:48:43 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap Default Constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap Name Constructor" << std::endl;
	this->name = name;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : FragTrap(obj), ScavTrap(obj)
{
	std::cout << "DiamondTrap Copy Constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
	std::cout << "DiamondTrap Copy assignment Operator" << std::endl;
	this->Energy_points = obj.Energy_points;
	this->Attack_damage = obj.Attack_damage;
	this->Hit_points = obj.Hit_points;
	return *this;
}

