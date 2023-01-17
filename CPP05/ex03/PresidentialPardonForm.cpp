/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 01:24:51 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/17 05:14:15 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
{
    std::cout << "-PresidentialPardonForm Default Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5)
{
    std::cout << "-PresidentialPardonForm Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & obj) : AForm(obj)
{
    std::cout << "-PresidentialPardonForm Copy Constructor" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator= (const PresidentialPardonForm & obj)
{
    (void) obj;
    std::cout << "-PresidentialPardonForm Copy assignment operator" << std::endl;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "-PresidentialPardonForm Destructor" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!getSign())
    {
        std::cout << "not signed can't execute !" << "\n";
        return ;
    }
    if (executor.getGrade() > getGradeexec())
        throw(AForm::GradeTooLowException());
    std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << "\n";
}
