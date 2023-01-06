/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 22:52:23 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/06 00:01:53 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30) {
	this->name = name;
	std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
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
	std::cout << "High Fives" << std::endl;
}