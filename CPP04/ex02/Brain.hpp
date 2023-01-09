/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:01:13 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/09 18:49:10 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    unsigned int size;
    std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& obj);
        Brain& operator=(Brain const & obj);
        ~Brain();
        void setIdea(const char * str);
        std::string getIdea(unsigned int size);
};

#endif