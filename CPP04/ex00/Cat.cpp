/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:54:05 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/08 18:23:15 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat Default Constructor" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat Destructor" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Myaw sound" << std::endl;
}

std::string Cat::getType( void ) const
{
    return this->type;
}