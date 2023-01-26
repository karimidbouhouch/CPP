/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 04:24:57 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/26 17:38:42 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

template <typename T, typename D>
typename T::iterator easyfind(T container, D i)
{
    typename T::iterator it = std::find(container.begin(), container.end(), i);
    if (it != container.end())
        return it;
    else
        throw std::invalid_argument("Value not found");
}