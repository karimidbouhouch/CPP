/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 00:49:11 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/06 01:48:49 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	// DiamondTrap::Hit_points = FragTrap::Hit_points;
	// DiamondTrap::Energy_points = ScavTrap::Energy_points;
	// DiamondTrap::Attack_damage = FragTrap::Attack_damage;
}

