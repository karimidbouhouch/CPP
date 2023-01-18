/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:16:42 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/18 04:44:45 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool  _sign;
        const int _grade_sign;
        const int _grade_exec;
    public:
        AForm();
        AForm(const std::string name, const int grade_sign, const int grade_exec);
        AForm(const AForm & obj);
        AForm& operator=(const AForm& obj);
        void beSigned(Bureaucrat &obj);
        bool getSign() const;
        std::string getName() const;
        int getGradesign() const;
        int getGradeexec() const;
        virtual void execute(Bureaucrat const & executor) const = 0;
        virtual ~AForm();
        
    class GradeTooHighException : public std::exception
    {
        public:
            const char * what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char * what() const throw();
    };
};


std::ostream &operator << (std::ostream &out, const AForm &obj);