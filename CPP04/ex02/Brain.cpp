/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:01:04 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/09 18:49:43 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : size(0)
{
    std::cout << "Brain Default Constructor" << std::endl;
}

Brain::Brain(const Brain& obj)
{
    this->size = obj.size;
    std::cout << "Brain Copy Constructor" << std::endl;
    int i = 0;
    while (i < 100)
    {
       this->ideas[i] = obj.ideas[i];
       i++;
    }
}

Brain& Brain::operator=(Brain const& obj)
{
    std::cout << "Brain Copy assignment operator" << std::endl;
    int i = 0;
    this->size = obj.size;
    if(this != &obj)
    {
        while (i < 100)
        {
            this->ideas[i] = obj.ideas[i];
            i++;
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor" << std::endl;
}

void Brain::setIdea(const char * str)
{
    this->ideas[size] = str;
    size++;
}

std::string Brain::getIdea(unsigned int size)
{
    return (this->ideas[size]);
}
