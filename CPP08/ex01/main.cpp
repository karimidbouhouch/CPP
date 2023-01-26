/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:35:37 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/26 01:52:47 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try{
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::vector<int>::iterator ptr;    
        for(ptr = sp.getData().begin(); ptr < sp.getData().end(); ptr++)
            std::cout << *ptr << ", ";
            
        std::cout << "\n";

        std::cout << sp.shortestSpan() << std::endl;
        // for(ptr = sp.getData().begin(); ptr < sp.getData().end(); ptr++)
        //     std::cout << *ptr << ", ";
            
        // std::cout << sp.longestSpan() << std::endl;
        // for(ptr = sp.getData().begin(); ptr < sp.getData().end(); ptr++)
        //     std::cout << *ptr << ", ";
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}