/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:51:52 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/15 03:51:13 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{     
    try 
    {
        Bureaucrat obj("the bureaucrat 1", 9);        
        std::cout << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
        obj.decrGrade();
        std::cout << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    try 
    {
        Bureaucrat obj("the bureaucrat 2", -6);        
        std::cout << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
        obj.decrGrade();
        std::cout << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}