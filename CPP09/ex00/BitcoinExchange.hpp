/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:34:24 by kid-bouh          #+#    #+#             */
/*   Updated: 2023/03/30 01:43:03 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <map>
#include <fstream>
#include <string>

int  check_date_valid(std::string date);
std::map<std::string, double> fill_data_to_map(std::map<std::string, double> data);
void ft_errors(int nb, std::string str);
void    ft_bitcoin_exchange(std::string file);