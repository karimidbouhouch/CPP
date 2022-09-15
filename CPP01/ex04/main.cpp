/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:45:31 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/15 00:54:59 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::string filename, s1, s2, text = "";
	std::ofstream file1;
	std::ifstream file2;
	std::string::size_type pos = 0;
	
	if(ac == 4)
	{
		filename = 	av[1];
		s1 	= 		av[2];
		s2 = 		av[3];

		file2.open(filename);
		if (file2.is_open())
		{
			file1.open(filename+".replace");
			if (file1.is_open())
			{
				while (std::getline(file2, text))
				{
					pos = text.find(s1);
					while((pos = text.find(s1, pos)) != std::string::npos)
					{
						text.erase(pos, s1.length());
						text.insert(pos, s2);
						pos += s1.length();
					}
					file1 << text;
					if (!file2.eof())
						file1 << "\n";
					text.empty();
				}
				file1.close();
			}
			file2.close();
		}
		else
		{
			std::cout << "error : error opening file" << std::endl;
		}
	}
	else 
		std::cout << "error in args \n";
}