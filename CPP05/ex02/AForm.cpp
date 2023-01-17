/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:16:36 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/17 02:37:43 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string name,  const int grade_sign, const int grade_exec) : _name(name), _sign(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
    std::cout << "-AForm Name Constructor" << std::endl;
    if (grade_sign < 1)
        throw GradeTooHighException();
    else if (grade_sign > 150)
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
    // else throw (AForm::GradeTooLowException());
}

int AForm::getSign()
{
    return this->_sign;
}

std::string AForm::getName()
{
    return this->_name;
}

int AForm::getGradesign()
{
    return this->_grade_sign;
}

int AForm::getGradeexec()
{
    return this->_grade_exec;
}

AForm::~AForm()
{
    std::cout << "-AForm Destructor" << std::endl;
}
