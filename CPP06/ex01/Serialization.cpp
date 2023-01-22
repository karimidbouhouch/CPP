/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 23:29:59 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/22 21:39:48 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data* data) {
    return reinterpret_cast<uintptr_t>(data);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}