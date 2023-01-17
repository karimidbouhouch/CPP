/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 01:24:10 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/17 04:43:10 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() 
{
    std::cout << "ShrubberyCreationForm Default Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137)
{
    std::cout << "ShrubberyCreationForm Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & obj) : AForm(obj)
{
    std::cout << "ShrubberyCreationForm Copy Constructor" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator= (const ShrubberyCreationForm & obj)
{
    (void) obj;
    std::cout << "ShrubberyCreationForm Copy assignment operator" << std::endl;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!getSign())
    {
        std::cout << "not signed can't execute !" << "\n";
        return ;
    }
    if (executor.getGrade() > getGradeexec())
        throw(AForm::GradeTooLowException());

    std::ofstream out(executor.getName() + "_sherbbery");
    // if (out.is_open == false) {
    //     std::cout << "Erro: Can't open file!";
    //     return;
    // }
    out << "#########################";
}
