/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 01:40:30 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/20 02:10:54 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <sstream> 
#include <cstdlib>


class Conversion{
    // private :
    //     std::string value;
    public :
        Conversion();
        ~Conversion();
        Conversion(std::string str);
        // Conversion(Conversion &obj);
        // Conversion & operator = (Conversion & obj);
        void toInt(std::string str);
        void toFloat(std::string str);
        void toChar(std::string str);
        void toDouble(std::string str);
};

#endif