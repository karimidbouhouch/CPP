/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:22:14 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/09 16:32:31 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat Default Constructor" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat& obj)
{
    std::cout << "WrongCat Copy Constructor" << std::endl;
    this->type = obj.type;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    std::cout << "WrongCat Copy assignment operator" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor" << std::endl;
}

std::string WrongCat::getType( void ) const
{
    return this->type;
}