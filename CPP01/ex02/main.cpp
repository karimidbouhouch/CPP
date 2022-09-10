/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 22:23:02 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/10 23:14:51 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "brain address \t\t: " << &brain << std::endl;
	std::cout << "stringPTR address \t: " << stringPTR << std::endl;
	std::cout << "stringREF address \t: " << &stringREF << std::endl;

	std::cout << "brain value \t\t: " << brain << std::endl;
	std::cout << "stringPTR value \t: " << *stringPTR << std::endl;
	std::cout << "stringREF value \t: " << stringREF << std::endl;
}