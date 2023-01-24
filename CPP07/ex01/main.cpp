/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:53:07 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/24 01:06:41 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void func(T t)
{
   std::cout << t << std::endl;
}

int main()
{
    int tab[] = {25, 85, 1337, 68, 11};
    char tab2[] = {'a', 'b', 'c'};

    iter(tab, 5, func);
    iter(tab2, 3, func);
}