/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:52:00 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/15 03:42:36 by kid-bouh         ###   ########.fr       */
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
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator = (Bureaucrat & obj);
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


std::ostream &operator << (std::ostream &out, Bureaucrat &obj);