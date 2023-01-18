/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:16:36 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/18 04:45:39 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string name,  const int grade_sign, const int grade_exec) : _name(name), _sign(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
    std::cout << "-AForm Name Constructor" << std::endl;
    if (grade_sign < 1 || grade_exec < 1)
        throw GradeTooHighException();
    else if (grade_sign > 150 || grade_exec > 150)
        throw GradeTooLowException();
}

AForm::AForm() :  _sign(false), _grade_sign(0), _grade_exec(0)
{
    std::cout << "-AForm Default Constructor" << std::endl;
}

AForm::AForm(const AForm & obj) : _name(obj._name), _sign(obj._sign), _grade_sign(obj._grade_sign), _grade_exec(obj._grade_exec)
{
    std::cout << "-AForm Copy Constructor" << std::endl;
}

AForm& AForm::operator=(const AForm& obj)
{
    std::cout << "-AForm Copy assignment operator" << std::endl;
    if (this != &obj)
        this->_sign = obj._sign;
    return *this;
}

const char * AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char * AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

void AForm::beSigned(Bureaucrat &obj)
{
    if (_grade_sign >= obj.getGrade())
        this->_sign = true;
    else throw (AForm::GradeTooLowException());
}

bool AForm::getSign() const
{
    return this->_sign;
}

std::string AForm::getName() const
{
    return this->_name;
}

int AForm::getGradesign() const 
{
    return this->_grade_sign;
}

int AForm::getGradeexec() const 
{
    return this->_grade_exec;
}

AForm::~AForm()
{
    std::cout << "-AForm Destructor" << std::endl;
}

std::ostream &operator << (std::ostream &out, const AForm &obj)
{
    out << "Form Name : " << obj.getName() << "; Form sign : " << obj.getSign() << "; Form Grade exec : " << obj.getGradeexec() << "; Form Grade sign : " << obj.getGradesign() << std::endl;
    return (out);
}