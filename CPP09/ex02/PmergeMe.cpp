/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:33:07 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/04/05 01:51:16 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void merge_deque(std::deque<int>& deq, int start, int mid, int end) 
{
    std::deque<int> left(mid - start + 1);
    std::deque<int> right(end - mid);
    for (int i = 0; i < (int)left.size(); i++) 
    {
        left[i] = deq[start + i];
    }
    for (int i = 0; i < (int)right.size(); i++) 
    {
        right[i] = deq[mid + 1 + i];
    }
    int i = 0, j = 0, k = start;
    while (i < (int)left.size() && j < (int)right.size()) 
    {
        if (left[i] <= right[j]) 
        {
            deq[k] = left[i];
            k++;
            i++;
        } 
        else 
        {
            deq[k] = right[j];
            k++;
            j++;
        }
    } 
    while (i < (int)left.size())
    {
        deq[k] = left[i];
        k++;
        i++;
    }
    while (j < (int)right.size())
    {
        deq[k] = right[j];
        k++;
        j++;
    }
}

void insertion_sort_deque(std::deque<int>& deq, int start, int end) 
{
    for (int i = start + 1; i <= end; i++) {
        int tmp = deq[i];
        int j = i - 1;
        while (j >= start && deq[j] > tmp) {
            deq[j + 1] = deq[j];
            --j;
        }
        deq[j + 1] = tmp;
    }
}

void merge_insert_sort_deque(std::deque<int>& deq, int start, int end) 
{
    if (end - start <= 10) {
        insertion_sort_deque(deq, start, end);
    } else {
        int mid = start + (end - start) / 2;
        merge_insert_sort_deque(deq, start, mid);
        merge_insert_sort_deque(deq, mid + 1, end);
        merge_deque(deq, start, mid, end);
    }
}

void merge_vector(std::vector<int>& vec, int start, int mid, int end) 
{
    std::vector<int> left(mid - start + 1);
    std::vector<int> right(end - mid);
    for (int i = 0; i < (int)left.size(); i++) 
    {
        left[i] = vec[start + i];
    }
    for (int i = 0; i < (int)right.size(); i++) 
    {
        right[i] = vec[mid + 1 + i];
    }
    int i = 0, j = 0, k = start;
    while (i < (int)left.size() && j < (int)right.size()) 
    {
        if (left[i] <= right[j]) 
        {
            vec[k] = left[i];
            k++;
            i++;
        } 
        else 
        {
            vec[k] = right[j];
            k++;
            j++;
        }
    } 
    while (i < (int)left.size())
    {
        vec[k] = left[i];
        k++;
        i++;
    }
    while (j < (int)right.size())
    {
        vec[k] = right[j];
        k++;
        j++;
    }
}

void insertion_sort_vector(std::vector<int>& vec, int start, int end) 
{
    for (int i = start + 1; i <= end; i++) {
        int tmp = vec[i];
        int j = i - 1;
        while (j >= start && vec[j] > tmp) {
            vec[j + 1] = vec[j];
            --j;
        }
        vec[j + 1] = tmp;
    }
}

void merge_insert_sort_vector(std::vector<int>& vec, int start, int end) 
{
    if (end - start <= 10) {
        insertion_sort_vector(vec, start, end);
    } else {
        int mid = start + (end - start) / 2;
        merge_insert_sort_vector(vec, start, mid);
        merge_insert_sort_vector(vec, mid + 1, end);
        merge_vector(vec, start, mid, end);
    }
}

bool ft_isdigits(std::string number)
{
    int i = 0;
    while (number[i])
    {
        if (!isdigit(number[i]))
            return false;
        i++;
    }
    return true;
}

void ft_print_numbers_vector(std::vector<int> &vec)
{
    for (int i = 0; i < (int)vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void ft_print_numbers_deque(std::deque<int> &deq)
{
    for (int i = 0; i < (int)deq.size(); i++) {
        std::cout << deq[i] << " ";
    }
    std::cout << std::endl;
}

void PmergeMe(std::vector<int> &vec, std::deque<int> &deq)
{
    //vector
    std::cout << "Before : ";
    ft_print_numbers_vector(vec);
    std::cout << "After  : ";
    std::clock_t start_vec = std::clock();
    merge_insert_sort_vector(vec, 0, vec.size() - 1);
    std::clock_t end_vec = std::clock();
    ft_print_numbers_vector(vec);
    double duration_vec = static_cast<double>(end_vec - start_vec) ;
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << duration_vec << "\n";

    //deque
    std::cout << "Before : ";
    ft_print_numbers_deque(deq);
    std::cout << "After  : ";
    std::clock_t start_deq = std::clock();
    merge_insert_sort_deque(deq, 0, deq.size() - 1);
    std::clock_t end_deq = std::clock();
    ft_print_numbers_deque(deq);
    double duration_deq = static_cast<double>(end_deq - start_deq) ;
    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << duration_deq << "\n";
}