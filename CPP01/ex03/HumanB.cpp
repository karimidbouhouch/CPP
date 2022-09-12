/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:16:05 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/11 19:28:37 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << name <<" attacks with their "<< weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name) : name(name), weapon(NULL){}

void HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
}