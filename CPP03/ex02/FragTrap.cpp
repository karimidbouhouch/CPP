/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 22:52:23 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/06 19:29:29 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	std::cout << "FragTrap Name constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap& frag)
{
	std::cout << "FragTrap Copy constructor" << std::endl;
	this->name = frag.name;
	this->Attack_damage = frag.Attack_damage;
	this->Energy_points = frag.Energy_points;
	this->Hit_points = frag.Hit_points;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	std::cout << "FragTrap copy assignment operator" << std::endl;
	if (this != &obj)
	{
		this->name = obj.name;
		this->Energy_points = obj.Energy_points;
		this->Hit_points = obj.Hit_points;
		this->Attack_damage = obj.Attack_damage;
	}
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap High Fives !" << std::endl;
}