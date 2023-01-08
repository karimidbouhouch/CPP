/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:53:57 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/08 17:46:46 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog Default Constructor" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Bark sound" << std::endl;
}

std::string Dog::getType( void ) const
{
    return this->type;
}