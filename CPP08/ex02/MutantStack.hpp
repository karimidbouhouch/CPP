/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:49:07 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/26 23:38:35 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <list>
#include <iostream>

template <class T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator                iterator;
        typedef typename std::stack<T>::container_type::const_iterator          const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator        reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator  const_reverse_iterator;
        iterator begin(void)
        {
            return this->c.begin();
        }
        const_iterator begin(void) const
        {
            return this->c.begin();
        }
        iterator end(void)
        {
            return this->c.end();
        }
        const_iterator end(void) const
        {
            return this->c.end();
        }
        const_reverse_iterator rbegin(void)
        {
            return this->c.rbegin();
        }
        reverse_iterator rbegin(void) const
        {
            return this->c.rbegin();
        }
        const_reverse_iterator rend(void)
        {
            return this->c.rend();
        }
        reverse_iterator rend(void) const
        {
            return this->c.rend();
        }
};