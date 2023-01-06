/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 00:22:43 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/05 22:50:59 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav1("hero1");
	ScavTrap scav2("hero2");
	ScavTrap scav3 = scav2;

	scav3.guardGate();
	scav3.attack("enemy");
	scav3.beRepaired(5);

	scav1.guardGate();
	scav1.attack("enemy");
	scav1.takeDamage(8);
	scav1.beRepaired(5);
}