/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:52:24 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/14 02:41:03 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	test(int i)
{
	std::cout << "hello world " << i << std::endl;
}

int main()
{
	void(*fun[5])(int) = {
		&test,
		&test,
		&test,
		&test,
		&test
	};

	int i = 0;
	while (i < 5)
	{
		(fun[i])(i);
		i++;
	}
	
	
}