/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:40:37 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/23 18:15:05 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>  
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate() {
    int random = std::rand() % 3;
    switch (random) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return nullptr;
    }
}

void identify(Base* p) {
    Base *a = dynamic_cast<A*>(p);
    Base *b = dynamic_cast<B*>(p);
    Base *c = dynamic_cast<C*>(p);
    if (a) {
        std::cout << a << " - Class : A" << std::endl;
    } else if (b) {
        std::cout << b << " - Class : B" << std::endl;
    } else if (c) {
        std::cout << c << " - Class : C" << std::endl;
    } else {
        std::cout << "Unknown" << std::endl;
    }
}

void identify(Base& p) {
    try {
        Base &a = dynamic_cast<A&>(p);
        std::cout << &a << " - Class : A" << std::endl;
    } catch (std::bad_cast&) {
        try {
            Base &b = dynamic_cast<B&>(p);
            std::cout << &b << " - Class : B" << std::endl;
        } catch (std::bad_cast&) {
            try {
                Base &c = dynamic_cast<C&>(p);
                std::cout << &c << " - Class : C" << std::endl;
            } catch (std::bad_cast&) {
                std::cout << "Unknown" << std::endl;
            }
        }
    }
}

int main() {
    std::srand(time(NULL));
    Base* p = generate();
    identify(p);
    identify(*p);
    delete p;
    return 0;
}