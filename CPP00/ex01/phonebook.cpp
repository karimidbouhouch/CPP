/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:46:50 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/02 22:45:18 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>

class Contact
{
	public :
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecre;
};

class PhoneBook{
	public :
		Contact contact[8];
};

int ft_strlen(std::string str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main()
{
	PhoneBook phone;
	std::string text;
	int index;
	int i;
	int j;

	j = 0;
	i = 0;
	while (text != "EXIT")
	{
		std::getline(std::cin, text);
		if (text == "ADD")
		{
			if (i == 8)
				i = 0;
			std::cout << "----------- ADD CONTACT -----------" << std::endl;
			std::cout << "Contact Nº(" << i + 1 <<")"<< std::endl;
			std::cout << "-> first name : ";
			std::getline(std::cin, phone.contact[i].firstname);
			while(phone.contact[i].firstname == "")
			{
				std::cout << "first name is required\n" << "-> first name : " ;
				std::getline(std::cin, phone.contact[i].firstname);
			}
				
			std::cout << "-> last name : ";
			std::getline(std::cin, phone.contact[i].lastname);
			while(phone.contact[i].lastname == "")
			{
				std::cout << "last name is required\n" << "-> last name : " ;
				std::getline(std::cin, phone.contact[i].lastname);
			}
			std::cout << "-> nickname : ";
			std::getline(std::cin, phone.contact[i].nickname);
			while(phone.contact[i].nickname == "")
			{
				std::cout << "nickname is required\n" << "-> nickname : " ;
				std::getline(std::cin, phone.contact[i].nickname);
			}
			std::cout << "-> phone number : ";
			std::getline(std::cin, phone.contact[i].phonenumber);
			while(phone.contact[i].phonenumber == "")
			{
				std::cout << "phone number is required\n" << "-> phone number : " ;
				std::getline(std::cin, phone.contact[i].phonenumber);
			}
			std::cout << "-> darkest secret : ";
			std::getline(std::cin, phone.contact[i].darkestsecre);
			while(phone.contact[i].darkestsecre == "")
			{
				std::cout << "darkest secret is required\n" << "-> darkest secret : " ;
				std::getline(std::cin, phone.contact[i].darkestsecre);
			}
			std::cout << "contact done !" << std::endl;
			i++;
			text = "";
		}
		else if (text == "SEARCH")
		{
			std::cout << "--------- SEARCH CONTACT ---------" << std::endl;
			std::cout << "Enter index of contact : ";
			std::cin >> index;
			index--;
			if (index >= 0 && index <= i)
			{
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << "index      |first name |last name  |nickname   " << std::endl;
				std::cout << "-----------------------------------------------" << std::endl;

				std::cout << index + 1 << "          |" ;
				if (ft_strlen(phone.contact[index].firstname) > 10)
					std::cout << (phone.contact[index].firstname).substr(0,10) + '.' << "|" ;
				else
				{
					std::cout << (phone.contact[index].firstname).substr(0,10) ;
					j = 0;
					while (j < 11 - ft_strlen(phone.contact[index].firstname))
					{
						std::cout << " ";
						j++;
					}
					std::cout << "|";
				}
				if (ft_strlen(phone.contact[index].lastname) > 10)
					std::cout << (phone.contact[index].lastname).substr(0,10) + '.' << "|" ;
				else
				{
					std::cout << (phone.contact[index].lastname).substr(0,10) ;
					j = 0;
					while (j < 11 - ft_strlen(phone.contact[index].lastname))
					{
						std::cout << " ";
						j++;
					}
					std::cout << "|";
				}
				if (ft_strlen(phone.contact[index].nickname) > 10)
					std::cout << (phone.contact[index].nickname).substr(0,10) + '.' ;
				else
				{
					std::cout << (phone.contact[index].nickname).substr(0,10);
					j = 0;
					while (j < 11 - ft_strlen(phone.contact[index].nickname))
					{
						std::cout << " ";
						j++;
					}
					std::cout << "\n";
				}
			}
			else
				std::cout << "Contact not found " << std::endl ;
			text = "";
		}
	}

	return 0;
}