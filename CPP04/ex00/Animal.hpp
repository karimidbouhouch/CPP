/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:47:50 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/08 19:18:07 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal& obj);
        Animal& operator=(const Animal& animal);
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType( void ) const;
};

#endif