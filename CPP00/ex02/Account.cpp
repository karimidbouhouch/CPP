/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 19:02:22 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/06 21:20:00 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts()
{
	return _nbAccounts;
}

int	Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	std::cout << "index:" << _accountIndex 
	<< ";amount:" << _amount << ";created" << std::endl;
	return ;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";amount:" << _amount << ";closed" << std::endl;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts()
			  << ";total:" << Account::getTotalAmount()
			  << ";deposits:" << Account::getNbDeposits()
			  << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	int p_amount;

	p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	Account::_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:"<< p_amount
			  << ";deposit:"<< deposit
			  << ";amount:"<< _amount
			  << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	int p_amount;

	p_amount = _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount"<< p_amount;
	if (p_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	_nbWithdrawals++;
	std::cout << ";withdrawal:"<< withdrawal << ";amount:"<< _amount
			  << ";nb_withdrawals:" << _nbWithdrawals  << std::endl;
	return (true);
}

void	Account::_displayTimestamp( void )
{
	time_t now = time(NULL);
	tm *ltm = localtime(&now);
	std::cout << "[" << ltm->tm_year + 1900
			<< std::setfill('0')
			<< std::setw(2) << ltm->tm_mon
			<< std::setw(2) << ltm->tm_mday << "_"
			<< std::setw(2) << ltm->tm_hour
			<< std::setw(2) << ltm->tm_min
			<< std::setw(2) << ltm->tm_sec << "] ";
}

int Account::checkAmount( void ) const
{
	return 0;
}