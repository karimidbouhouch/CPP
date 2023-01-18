/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:51:52 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/18 03:12:43 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{    
    try 
    {
        Bureaucrat Staff("Stuff", 5);
        Intern someRandomIntern;

        AForm* rrf;
        rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
        if (rrf)
        {
            rrf->beSigned(Staff);
            Staff.signForm(*rrf);
            rrf->execute(Staff);
        }
        delete rrf;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}