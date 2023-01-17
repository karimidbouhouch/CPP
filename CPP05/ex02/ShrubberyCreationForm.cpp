/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 01:24:10 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/17 02:33:57 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137)
{
    std::cout << "ShrubberyCreationForm Constructor" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!getSign())
    {
        std::cout << "not signed can't execute !" << "\n";
        return ;
    }
    if (executor.getGrade() > getGradeexec())
        throw(Form::GradeTooLowException());

    std::ifstream out(getName + "_sherbbery");
    if (out.is_open == false) {
        std::cout << "Erro: Can't open file!";
        return;
    }
    std::string tree;
    tree.append("                                    # #### ####
                                ### \/#|### |/####
                               ##\/#/ \||/##/_/##/_#
                             ###  \/###|/ \/ # ###
                           ##_\_#\_\## | #/###_/_####
                          ## #### # \ #| /  #### ##/##
                           __#_--###`  |{,###---###-~
                                     \ }{
                                      }}{
                                      }}{
                                 ejm  {{}
                                , -=-~{ .-^- _
                                      `}
                                       {");
                                       
    out << tree;

}
