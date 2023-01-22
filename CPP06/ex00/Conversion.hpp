/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 01:40:30 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/22 22:42:47 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <sstream> 
#include <cstdlib>


class Conversion{
    public :
        Conversion();
        ~Conversion();
        Conversion(std::string str);
        void toInt(std::string str);
        void toFloat(std::string str);
        void toChar(std::string str);
        void toDouble(std::string str);
        void charTo(std::string str);
};

#endif