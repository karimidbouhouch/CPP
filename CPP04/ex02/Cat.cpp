/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:54:05 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/09 17:42:18 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal( "Cat" )
{
    std::cout << "Cat Default Constructor" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(Cat const & obj)
{
    std::cout << "Cat Copy Constructor" << std::endl;
    this->type = obj.type;
    this->brain = new Brain(*(obj.brain));
}

Cat& Cat::operator=(const Cat& obj)
{
    std::cout << "Cat Copy assignment operator" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;
        delete this->brain;
        this->brain = new Brain(*(obj.brain));
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << "Myaw sound" << std::endl;
}
