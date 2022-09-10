/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +# +  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:48:54 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/10 00:35:44 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie sZombie = Zombie("GGGGGG");
	sZombie.announce();

	Zombie *hZombie = newZombie("VVVVV");
	hZombie->announce();
	delete hZombie;
}