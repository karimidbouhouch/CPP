/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:52:00 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/18 04:19:19 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class AForm;

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
        Bureaucrat& operator = (const Bureaucrat & obj);
        std::string getName() const;
        int getGrade() const;
        void incrGrade();
        void decrGrade();
        void signForm(AForm &obj);
        void executeForm(AForm const & obj);
        
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


std::ostream &operator << (std::ostream &out, const Bureaucrat &obj);