/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:15:57 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/11 18:26:00 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << name <<" attacks with their "<< weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){}
