/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:51:52 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/16 02:32:01 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{    
    try 
    {
        Bureaucrat Director("Director", 1);
        Bureaucrat Staff("Staff", 10);
        Form F("Paper", 5, 9);

        std::cout << Director.getName() << ", bureaucrat grade " << Director.getGrade() << std::endl;
        std::cout << Staff.getName() << ", bureaucrat grade " << Staff.getGrade() << std::endl;

        F.beSigned(Director);
        Director.signForm(F);
        
        // std::cout << Director.getName() << ", bureaucrat grade " << Director.getGrade() << std::endl;
        // std::cout << Staff.getName() << ", bureaucrat grade " << Staff.getGrade() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}