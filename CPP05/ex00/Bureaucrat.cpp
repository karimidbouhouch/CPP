/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:52:06 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/12 01:27:45 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) , _grade(grade)
{
    std::cout << "Default Constructor" << std::endl;
    if(_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat& obj)
{
    this->_grade = obj._grade;
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat & obj)
{
    if (this != &obj)
    {
        this->_grade = obj._grade;
    }
    return *this;
}

std::string Bureaucrat::getName()
{
    return this->_name;
}

int Bureaucrat::getGrade()
{
    return this->_grade;
}

void Bureaucrat::incrGrade()
{
    
}

void Bureaucrat::decrGrade()
{
    
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}