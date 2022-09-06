/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:08:11 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/06 20:33:07 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact
{
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;
	public :
		std::string getFirstname()
		{
			return this->firstname;
		}
		void setFirstname(std::string name)
		{
			this->firstname = name;
		}
		
		std::string getLastname()
		{
			return this->lastname;
		}
		void setLastname(std::string name)
		{
			this->lastname = name;
		}

		std::string getNickname()
		{
			return this->nickname;
		}
		void setNickname(std::string name)
		{
			this->nickname = name;
		}
		
		std::string getPhonenumber()
		{
			return this->phonenumber;
		}
		void setPhonenumber(std::string name)
		{
			this->phonenumber = name;
		}		
		
		std::string getDarkestsecre()
		{
			return this->darkestsecret;
		}
		void setDarkestsecre(std::string name)
		{
			this->darkestsecret = name;
		}
};