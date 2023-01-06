/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 00:52:42 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/06 19:37:32 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap dt("hero");
	DiamondTrap dt2("hero2");
	DiamondTrap dt3;
	dt3 = dt2;

	dt.whoAmI();
	dt.attack("enemy");

	dt3.whoAmI();
	dt3.attack("enemy2");
}