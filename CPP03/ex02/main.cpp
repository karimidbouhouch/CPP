/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 22:52:40 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/06 00:48:07 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap frag1("hero1");
	FragTrap frag2("hero2");
	FragTrap frag3("hero3");
	frag3 = frag2;

	frag1.attack("enemy");
	frag1.highFivesGuys();
	
	frag3.highFivesGuys();
}