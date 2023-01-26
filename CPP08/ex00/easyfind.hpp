/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 04:24:57 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/25 22:30:01 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

template <typename T>
int easyfind(T container, int i)
{
    typename T::iterator it = std::find(container.begin(), container.end(), i);
    if (it != container.end())
        return *it;
    else
        throw std::invalid_argument("Value not found");
}