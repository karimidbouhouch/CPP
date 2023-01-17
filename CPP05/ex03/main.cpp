/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:51:52 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/17 05:16:18 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{    
    try 
    {
        Bureaucrat Director("Director", 4);
        AForm *form = new ShrubberyCreationForm("Paper");
        form->beSigned(Director);
        Director.executeForm(*form);
        delete form;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}