/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:58:46 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/10 01:28:07 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
class Zombie{
	std::string name;
	public:
		void announce( void );
		Zombie();
		Zombie(std::string name);
		~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif 
