/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:51:52 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/17 04:14:47 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{    
    try 
    {
        Bureaucrat Director("Director", 5);
        Bureaucrat Staff("Staff", 6);
        Form Paper("Paper", 4, 9);

        Director.incrGrade();
        std::cout << Director.getName() << ", bureaucrat grade " << Director.getGrade() << std::endl;
        std::cout << Staff.getName() << ", bureaucrat grade " << Staff.getGrade() << std::endl;

        Paper.beSigned(Director);
        Director.signForm(Paper);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}