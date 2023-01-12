/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:52:00 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/12 01:18:01 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat 
{
    private:
        const std::string   _name;
        int                 _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat& obj);
        Bureaucrat & operator = (Bureaucrat & obj);
        std::string getName();
        int getGrade();
        void incrGrade();
        void decrGrade();
        
        class GradeTooHighException : public std::exception 
        {
            public :
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception 
        {
            public :
                const char* what() const throw();
        };
};