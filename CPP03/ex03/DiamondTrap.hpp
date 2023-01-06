/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 00:49:05 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/06 01:46:14 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string name;
	public:
		// DiamondTrap();
		DiamondTrap(std::string name);
		// DiamondTrap(const DiamondTrap& obj);
		// DiamondTrap& operator=(DiamondTrap& obj);
		// ~DiamondTrap();
		// void whoAmI();
		// void attack();
};


#endif 
