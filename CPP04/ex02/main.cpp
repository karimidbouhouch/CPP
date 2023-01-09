/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:44:45 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/09 20:31:55 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
        
    delete j;
    delete i;

    Animal *tab[4];

    tab[0] = new Dog();
    tab[1] = new Dog();
    tab[2] = new Cat();
    tab[3] = new Cat();

    delete tab[0];
    delete tab[1];
    delete tab[2];
    delete tab[3];

    
    // Animal a;
    // a.makeSound();

    // Brain b;
    // b.setIdea("Idea 1");
    // b.setIdea("Idea 2");
    // std::cout << b.getIdea(0) << std::endl;
    // std::cout << b.getIdea(1) << std::endl;
    
    return 0;
}