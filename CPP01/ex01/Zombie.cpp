/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 01:33:15 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/10 21:04:30 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << getName() << " : BraiiiiiiinnnzzzZ" << std::endl;
}

Zombie::Zombie()
{
	std::cout << "Constructor" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor" << std::endl;
}

std::string Zombie::getName()
{
	return name;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}