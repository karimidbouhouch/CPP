/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:52:06 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/15 03:44:31 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) , _grade(grade)
{
    std::cout << "Name Constructor" << std::endl;
    if(_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : _name(obj._name)
{
    std::cout << "Copy Constructor" << std::endl;
    this->_grade = obj._grade;
}

Bureaucrat& Bureaucrat::operator = (Bureaucrat & obj)
{
    std::cout << "Copy assignment operator" << std::endl;
    if (this != &obj)
    {
        const_cast<std::string&>(this->_name) = obj._name;
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
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    this->_grade++;
}

void Bureaucrat::decrGrade()
{
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    this->_grade--;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

std::ostream &operator << (std::ostream &out, Bureaucrat &obj)
{
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return (out);
}