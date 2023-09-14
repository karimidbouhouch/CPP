/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:33:12 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/04/05 01:33:52 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>
#include <string>
#include <chrono>
#include <deque>

void merge_deque(std::deque<int>& deq, int start, int mid, int end);
void insertion_sort_deque(std::deque<int>& deq, int start, int end);
void merge_insert_sort_deque(std::deque<int>& deq, int start, int end);
void ft_print_numbers_deque(std::deque<int> &deq);

void merge_vector(std::vector<int>& vec, int start, int mid, int end);
void insertion_sort_vector(std::vector<int>& vec, int start, int end);
void merge_insert_sort_vector(std::vector<int>& vec, int start, int end);
void ft_print_numbers_vector(std::vector<int> &vec);

bool ft_isdigits(std::string number);

void PmergeMe(std::vector<int> &vec, std::deque<int> &deq);