/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 05:37:07 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/18 02:39:41 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "-Intern Default Constructor" << std::endl;
}

Intern::Intern(const Intern & obj)
{
    *this = obj;
    std::cout << "-Intern Copy Constructor" << std::endl;
}

Intern & Intern::operator = (const Intern & obj)
{
    (void) obj;
    std::cout << "-Intern Copy assignment operator" << std::endl;
    return *this;
}

Intern::~Intern()
{
    std::cout << "-Intern Destructor" << std::endl;
}

AForm* Intern::makeForm(std::string nameForm, std::string targetForm)
{
    std::string tab[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

    int i = 0;
    for (i = 0; i < 3; i++)
    {
        if (tab[i] == nameForm)
        {
            std::cout << "Intern creates " << nameForm << std::endl;
            break;
        }
    }
    switch (i)
    {
        case 0:
            return new PresidentialPardonForm(targetForm);
        case 1:
            return new RobotomyRequestForm(targetForm);
        case 2:
            return new ShrubberyCreationForm(targetForm);
        default:
        {
            std::cout << "can't create form, wrong name" << std::endl;
            return NULL;
        }
    }
    return NULL;
}