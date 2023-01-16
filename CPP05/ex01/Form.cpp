/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:16:36 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/16 02:41:01 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, const int grade_sign, const int grade_exec) : _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
    std::cout << "Name Constructor" << std::endl;
    if (grade_sign < 1)
        throw GradeTooHighException();
    else if (grade_sign > 150)
        throw GradeTooLowException();
}

Form::Form() : _grade_sign(0), _grade_exec(0)
{
    std::cout << "Default Constructor" << std::endl;
}

Form::Form(const Form & obj) : _name(obj._name), _sign(obj._sign), _grade_sign(obj._grade_sign), _grade_exec(obj._grade_exec)
{
    std::cout << "Copy Constructor" << std::endl;
}

Form& Form::operator=(const Form& obj)
{
    std::cout << "Copy assignment operator" << std::endl;
    if (this != &obj)
        this->_sign = obj._sign;
    return *this;
}

const char * Form::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char * Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

void Form::beSigned(Bureaucrat &obj)
{
    if (_grade_sign >= obj.getGrade())
        this->_sign = true;
    else throw (Form::GradeTooLowException());
}

int Form::getSign()
{
    return this->_sign;
}

std::string Form::getName()
{
    return this->_name;
}

int Form::getGradesign()
{
    return this->_grade_sign;
}

int Form::getGradeexec()
{
    return this->_grade_exec;
}

Form::~Form(){}
