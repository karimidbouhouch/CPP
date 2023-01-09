/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:47:40 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/09 17:49:13 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor" << std::endl;
    this->type = "Animal";
}

Animal::Animal(std::string _type)
{
    std::cout << "Animal Name Constructor" << std::endl;
    this->type = _type;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor" << std::endl;
}

Animal::Animal(Animal& obj)
{
    std::cout << "Animal Copy Constructor" << std::endl;
    this->type = obj.type;
}

Animal& Animal::operator=(const Animal& animal)
{
    std::cout << "Animal Copy assignment operator" << std::endl;
    if(this != &animal)
    {
        this->type = animal.type;
    }
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType( void ) const
{
    return this->type;
}
