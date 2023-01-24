/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 22:12:50 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/24 01:00:27 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    unsigned int size = 23;
    Array<int> numbers(size);
    
    for(unsigned int i = 0; i < size; i++)
        numbers[i] = i;

    try {
        for (unsigned int i = 0; i < size; i++)
            std::cout << numbers[i] << ", ";
        std::cout << "\n";
    }   
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    } 
    try
    {
        std::cout << numbers[50] << "\n";
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}