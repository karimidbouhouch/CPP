/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 01:33:04 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/10 21:04:22 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombies;
	int N = 9;
	std::string name = "hola";
	int i = 0;

	zombies = zombieHorde(N, name);
	while (i < N)
	{
		zombies[i].announce();
		i++;
	}
	delete [] zombies ;
}