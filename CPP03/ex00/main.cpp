/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:54:43 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/04 20:06:59 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap1("hero1");
	ClapTrap claptrap2("hero2");

	claptrap1.attack("enemy");
	claptrap1.beRepaired(6);
	claptrap1.takeDamage(8);

	claptrap2.attack("enemy");
	claptrap2.takeDamage(8);
	claptrap2.beRepaired(15);
}