/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:32:58 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/04/05 01:33:57 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
    
    std::vector<int> vec;
    std::deque<int> deq;

    if (ac > 1)
    {
        int i = 1;
        while (av[i])
        {
            if (ft_isdigits(av[i]))
            {
                int num = std::stoi(av[i]);
                vec.push_back(num);
                deq.push_back(num);
            }
            else 
            {
                std::cout << "Error\n";
                return 0;
            }
            i++;
        }
        PmergeMe(vec, deq);
    }
    else
        std::cout << "Error\n";
    return 0;
}
