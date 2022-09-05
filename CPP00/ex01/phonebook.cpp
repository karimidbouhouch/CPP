/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:46:50 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/04 18:43:52 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int ft_strlen(std::string str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int add_contact(PhoneBook phone, int i, std::string text)
// {
// 	std::string input;

// 	std::getline(std::cin, text);
// 	if (text == "ADD")
// 	{
// 		if (i == 8)
// 			i = 0;
// 		std::cout << "----------- ADD CONTACT -----------" << std::endl;
// 		std::cout << "Contact Nº(" << i + 1 <<")"<< std::endl;
// 		std::cout << "-> first name : ";
// 		std::getline(std::cin, input);
// 		phone.contact[i].setFirstname(input);
// 		while (phone.contact[i].getFirstname() == "")
// 		{
// 			std::cout << "first name is required\n" << "-> first name : " ;
// 			std::getline(std::cin, input);
// 			phone.contact[i].setFirstname(input);
// 		}
// 		std::cout << "-> last name : ";
// 		std::getline(std::cin, input);
// 		phone.contact[i].setLastname(input);
// 		while (phone.contact[i].getLastname() == "")
// 		{
// 			std::cout << "last name is required\n" << "-> last name : " ;
// 			std::getline(std::cin, input);
// 			phone.contact[i].setLastname(input);
// 		}
// 		std::cout << "-> nickname : ";
// 		std::getline(std::cin, input);
// 		phone.contact[i].setNickname(input);
// 		while (phone.contact[i].getNickname() == "")
// 		{
// 			std::cout << "nickname is required\n" << "-> nickname : " ;
// 			std::getline(std::cin, input);
// 			phone.contact[i].setNickname(input);
// 		}
// 		std::cout << "-> phone number : ";
// 		std::getline(std::cin, input);
// 		phone.contact[i].setPhonenumber(input);
// 		while (phone.contact[i].getPhonenumber() == "")
// 		{
// 			std::cout << "phone number is required\n" << "-> phone number : " ;
// 			std::getline(std::cin, input);
// 			phone.contact[i].setPhonenumber(input);
// 		}
// 		std::cout << "-> darkest secret : ";
// 		std::getline(std::cin, input);
// 		phone.contact[i].setDarkestsecre(input);
// 		while (phone.contact[i].getDarkestsecre() == "")
// 		{
// 			std::cout << "darkest secret is required\n" << "-> darkest secret : " ;
// 			std::getline(std::cin, input);
// 			phone.contact[i].setDarkestsecre(input);
// 		}
		
// 		std::cout << "contact done !" << std::endl;
// 		i++;
// 		text = "";
// 	}
// 	return (i);
// }

int main()
{
	PhoneBook phone;
	std::string text;
	int index;
	int i;
	int j;
	int tmp;
	std::string input;

	j = 0;
	i = 0;
	tmp = 0;
	while (std::getline(std::cin, text) && !std::cin.eof())
	{
		if (text == "EXIT")
			return (0);
		if (text == "ADD")
		{
			if (i == 8)
				i = 0;
			std::cout << "----------- ADD CONTACT -----------" << std::endl;
			std::cout << "Contact Nº(" << i + 1 <<")"<< std::endl;
			std::cout << "-> first name : ";
			std::getline(std::cin, input);
			phone.contact[i].setFirstname(input);
			while (phone.contact[i].getFirstname() == "")
			{
				if (std::cin.eof())
					return 0;
				std::cout << "first name is required\n" << "-> first name : " ;
				std::getline(std::cin, input);
				phone.contact[i].setFirstname(input);
			}
			std::cout << "-> last name : ";
			std::getline(std::cin, input);
			phone.contact[i].setLastname(input);
			while (phone.contact[i].getLastname() == "")
			{
				if (std::cin.eof())
					return 0;
				std::cout << "last name is required\n" << "-> last name : " ;
				std::getline(std::cin, input);
				phone.contact[i].setLastname(input);
			}
			std::cout << "-> nickname : ";
			std::getline(std::cin, input);
			phone.contact[i].setNickname(input);
			while (phone.contact[i].getNickname() == "" )
			{
				if (std::cin.eof())
					return 0;
				std::cout << "nickname is required\n" << "-> nickname : " ;
				std::getline(std::cin, input);
				phone.contact[i].setNickname(input);
			}
			std::cout << "-> phone number : ";
			std::getline(std::cin, input);
			phone.contact[i].setPhonenumber(input);
			while (phone.contact[i].getPhonenumber() == "" )
			{
				if (std::cin.eof())
					return 0;
				std::cout << "phone number is required\n" << "-> phone number : " ;
				std::getline(std::cin, input);
				phone.contact[i].setPhonenumber(input);
			}
			std::cout << "-> darkest secret : ";
			std::getline(std::cin, input);
			phone.contact[i].setDarkestsecre(input);
			while (phone.contact[i].getDarkestsecre() == ""  && !std::cin.eof())
			{
				if (std::cin.eof())
					return 0;
				std::cout << "darkest secret is required\n" << "-> darkest secret : " ;
				std::getline(std::cin, input);
				phone.contact[i].setDarkestsecre(input);
			}
			
			std::cout << "contact done !" << std::endl;
			i++;
			text = "";
		}
		if (text == "SEARCH")
		{
			std::cout << "--------- SEARCH CONTACT ---------" << std::endl;
			std::cout << "Enter index of contact : ";
			std::cin >> index;
			if (std::cin.eof())
				return 0;
			index--;
			if (i > tmp)
				tmp = i;
			if (index >= 0 && index < tmp)
			{
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << "index      |first name |last name  |nickname   " << std::endl;
				std::cout << "-----------------------------------------------" << std::endl;
				std::cout << index + 1 << "          |" ;
				if (ft_strlen(phone.contact[index].getFirstname()) > 10)
					std::cout << (phone.contact[index].getFirstname()).substr(0,10) + '.' << "|" ;
				else
				{
					std::cout << (phone.contact[index].getFirstname()).substr(0,10) ;
					j = 0;
					while (j < 11 - ft_strlen(phone.contact[index].getFirstname()))
					{
						std::cout << " ";
						j++;
					}
					std::cout << "|";
				}
				if (ft_strlen(phone.contact[index].getLastname()) > 10)
					std::cout << (phone.contact[index].getLastname()).substr(0,10) + '.' << "|" ;
				else
				{
					std::cout << (phone.contact[index].getLastname()).substr(0,10) ;
					j = 0;
					while (j < 11 - ft_strlen(phone.contact[index].getLastname()))
					{
						std::cout << " ";
						j++;
					}
					std::cout << "|";
				}
				if (ft_strlen(phone.contact[index].getNickname()) > 10)
					std::cout << (phone.contact[index].getNickname()).substr(0,10) + '.' << std::endl ;
				else
				{
					std::cout << (phone.contact[index].getNickname()).substr(0,10);
					j = 0;
					while (j < 11 - ft_strlen(phone.contact[index].getNickname()))
					{
						std::cout << " ";
						j++;
					}
					std::cout << "\n";
				}
			}
			else
				std::cout << "Contact not found " << std::endl ;
			text.clear();
		}
	}
	return 0;
}