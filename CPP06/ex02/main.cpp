/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:40:37 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/22 02:24:47 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

class Base {
public:
    virtual ~Base();
};

Base::~Base(){}

class A : public Base {};
class B : public Base {};
class C : public Base {};

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
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown" << std::endl;
    }
}

void identify(Base& p) {
    try {
        dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } catch (std::bad_cast&) {
        try {
            dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        } catch (std::bad_cast&) {
            try {
                dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            } catch (std::bad_cast&) {
                std::cout << "Unknown" << std::endl;
            }
        }
    }
}

int main() {
    std::srand(time(nullptr));
    Base* p = generate();
    identify(p);
    identify(*p);
    delete p;
    return 0;
}