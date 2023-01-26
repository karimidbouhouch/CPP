/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:35:46 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/01/26 20:48:31 by kid-bouh         ###   ########.fr       */
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
        Span(){};
    public:
        Span(unsigned int N) : _N(N), _count(0){ _data.reserve(_N);}
        void addNumber(int number)
        {
            if (_count < _N)
            {
                _data.push_back(number);
                _count++;
            }
            else throw std::invalid_argument("span is full");
        }
        int shortestSpan()
        {
            if (_count < 2)
                throw std::invalid_argument("less than 2 numbers");
            int diff = 0;

            int shortest = 2147483647;
            std::vector<int> tmp = _data;
            std::sort(tmp.begin(), tmp.end());
            for (unsigned int i = 0; i < _count - 1; i++)
            {
                diff = tmp[i + 1] - tmp[i];
                if (diff < 0)
                        diff *= -1;
                if (diff < shortest)
                    shortest = diff;
            }
            return shortest;
        }
        int longestSpan()
        {
            if (_count < 2)
                throw std::invalid_argument("less than 2 numbers");
            int min = *min_element(_data.begin(), _data.end());
            int max = *max_element(_data.begin(), _data.end());
            return (max - min);
        }
        template<typename T>
        void addManyNumbers(T begin, T end)
        {
            for (T bg = begin; bg != end; bg++)
            {
                addNumber(*bg);
            }
        }
        std::vector<int> getData()
        {
            return _data;
        }
        ~Span(){}
};
