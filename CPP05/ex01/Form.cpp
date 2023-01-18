/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:16:36 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/18 04:42:51 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name,  const int grade_sign, const int grade_exec) : _name(name), _sign(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
    std::cout << "-Form Name Constructor" << std::endl;
    if (grade_sign < 1 || grade_exec < 1)
        throw GradeTooHighException();
    else if (grade_sign > 150 || grade_exec > 150)
        throw GradeTooLowException();
}

Form::Form() :  _sign(false), _grade_sign(0), _grade_exec(0)
{
    std::cout << "-Form Default Constructor" << std::endl;
}

Form::Form(const Form & obj) : _name(obj._name), _sign(obj._sign), _grade_sign(obj._grade_sign), _grade_exec(obj._grade_exec)
{
    std::cout << "-Form Copy Constructor" << std::endl;
}

Form& Form::operator=(const Form& obj)
{
    std::cout << "-Form Copy assignment operator" << std::endl;
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

int Form::getSign() const 
{
    return this->_sign;
}

std::string Form::getName() const 
{
    return this->_name;
}

int Form::getGradesign() const 
{
    return this->_grade_sign;
}

int Form::getGradeexec() const 
{
    return this->_grade_exec;
}

Form::~Form()
{
    std::cout << "-Form Destructor" << std::endl;
}

std::ostream &operator << (std::ostream &out, const Form &obj)
{
    out << "Form Name : " << obj.getName() << "; Form sign : " << obj.getSign() << "; Form Grade exec : " << obj.getGradeexec() << "; Form Grade sign : " << obj.getGradesign() << std::endl;
    return (out);
}