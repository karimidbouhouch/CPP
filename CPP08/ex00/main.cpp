/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 04:24:37 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/26 22:58:31 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> vec;

        for (int i = 1; i <= 10; i++)
            vec.push_back(i);

        std::cout << "Found: " << *easyfind(vec, 5) << std::endl;
        std::cout << "Found: " << *easyfind(vec, 8) << std::endl;
        std::cout << "Found: " << *easyfind(vec, 20) << std::endl;
    }
    catch(std::exception const &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}