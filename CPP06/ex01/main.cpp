/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 23:45:12 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/22 01:35:21 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdint>

struct Data {
    int x;
    double y;
    std::string z;
};

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}

int main() {
    Data data;
    data.x = 5;
    data.y = 3.14;
    data.z = "hello";

    Data* ptr = &data;
    uintptr_t serialized = serialize(ptr);
    Data* deserialized = deserialize(serialized);

    std::cout << (ptr == deserialized) << std::endl;

    return 0;
}