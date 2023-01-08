/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:22:29 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/09 00:50:00 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default Constructor" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& obj)
{
    std::cout << "WrongAnimal Copy Constructor" << std::endl;
    this->type = obj.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& w)
{
    std::cout << "WrongAnimal Copy assignment operator" << std::endl;
    if(this != &w)
    {
        this->type = w.type;
    }
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
    return this->type;
}
