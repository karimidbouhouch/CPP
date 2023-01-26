/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:35:46 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/26 01:52:37 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

class Span
{
    private:
        unsigned int _N;
        unsigned int _count;
        std::vector<int> _data;
    public:
        Span(unsigned int N) : _N(N), _count(0){}
        void addNumber(int number)
        {
            if (_N > _count)
            {
                _data.push_back(number);
                _count++;
            }
            else throw std::invalid_argument("span is full");
        }
        int shortestSpan()
        {
            int diff = 0;
            int shortest = 2147483647;
            std::sort(_data.begin(), _data.end());
            for (unsigned int i = 0; i < _count - 1; i++)
            {
                diff = _data[i + 1] - _data[i];
                if (diff < shortest)
                    shortest = diff;
                if (diff < 0)
                    diff *= -1;
            }
            return shortest;
        }

        // int longestSpan()
        // {
        //     // std::sort(_data.begin(), _data.end());
        //     int longest = 0;
        //     for (unsigned int i = 0; i < _count - 1; i++)
        //     {
        //         int diff = _data[i + 1] - _data[i];
        //         if (diff > longest)
        //             longest = diff;
        //     }
        //     return longest;
        // }
        
        std::vector<int> getData()
        {
            return _data;
        }
        ~Span(){}
};
