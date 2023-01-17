/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:52:06 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/17 01:45:34 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    std::cout << "-Bureaucrat Name Constructor" << std::endl;
    if(grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "-Bureaucrat Destructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    std::cout << "-Bureaucrat Copy Constructor" << std::endl;
    this->_grade = obj._grade;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat & obj)
{
    std::cout << "-Bureaucrat Copy assignment operator" << std::endl;
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
    if(_grade - 1 < 1)
        throw GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrGrade()
{
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    this->_grade++;
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

void Bureaucrat::signForm(class AForm &obj)
{
    if (obj.getSign())
        std::cout << this->_name << " signed " << obj.getName() << "\n";
    else
        std::cout << this->_name << " couldn’t sign " << obj.getName() << " because grade too low " << obj.getGradesign() << "\n";
}
