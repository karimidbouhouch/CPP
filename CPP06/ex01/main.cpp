/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 23:45:12 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/22 22:36:20 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main() {
    Data data;
    data.x = 5;
    data.y = 17.88;
    data.z = "hello";

    Data *ptr = &data;

    std::cout << "x = " << ptr->x << std::endl;
    std::cout << "y = " << ptr->y << std::endl;
    std::cout << "z = " << ptr->z << std::endl;
    
    uintptr_t serialized = serialize(ptr);
    std::cout << "serialized : " << serialized << std::endl;
    
    Data *deserialized = deserialize(serialized);
    std::cout << "deserialized : " << deserialized << std::endl;

    std::cout << "x = " << deserialized->x << std::endl;
    std::cout << "y = " << deserialized->y << std::endl;
    std::cout << "z = " << deserialized->z << std::endl;
    
    return 0;
}