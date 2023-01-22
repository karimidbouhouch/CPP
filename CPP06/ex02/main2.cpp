

// #include <iostream>

// class Base {
// public:
//     void print()
//     {
//         std::cout << "here\n";    
//     }
//     virtual ~Base();
// };

// Base::~Base(){};

// class Derived : public Base {};

// int main() {
//     Base* bp = new Derived();
//     // bp->print();
//     Derived& dp = dynamic_cast<Derived&>(bp);
//     // dp->print();
//     if (&dp) {
//         std::cout << "Casting succeeded" << std::endl;
//     } else {
//         std::cout << "Casting failed" << std::endl;
//     }
//     return 0;
// }


#include <iostream>

class Base {
public:
    virtual ~Base();
};

Base::~Base(){}

class Derived1 : public Base {};
class Derived2 : public Base {};
class Derived3 : public Base {};

int main() {
    Derived3 tmp;
    Derived3& b = tmp;
    Base var;
    try
    {
        var = dynamic_cast<Derived1&>(b);
        std::cout << "Casting succeeded" << std::endl;
    } 
    catch (std::bad_cast& e)
    {
        std::cout << "Casting failed" << std::endl;
    }

    return 0;
}