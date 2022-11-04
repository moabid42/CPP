/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:29:00 by moabid            #+#    #+#             */
/*   Updated: 2022/10/29 16:26:00 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return (_totalAmount);
}

int Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return ;
}

//////////////////////////PRIVATE FUNCTIONS/////////////////////////////////////

void	Account::_displayTimestamp( void )
{
	time_t	curr_time;
	std::tm	*now;

	curr_time = std::time(NULL);
	now = std::localtime(&curr_time);

	std::cout << '[';
	std::cout << now->tm_year + 1900;
	std::cout << std::setw(2) << std::setfill('0');
	std::cout << now->tm_mon;
	std::cout << std::setw(2) << std::setfill('0');
	std::cout << now->tm_mday;
	std::cout << '_';
	std::cout << now->tm_hour;
	std::cout << now->tm_min;
	std::cout << now->tm_sec;
	std::cout << ']';

	return ;
}

//////////////////////////CONSTRUCTOR///////////////////////////////////////////

Account::Account( int initial_deposit )
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amout:" << _amount << ";created" << std::endl;
}

Account::~Account( void ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amout:" << _amount << ";closed" << std::endl;
	return ;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int	prev_amount;

	prev_amount = _amount;
	_nbDeposits++;
	_amount += deposit;

	_totalAmount += deposit;
	_totalNbDeposits++;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << prev_amount;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nbDeposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int	prev_amount;

	prev_amount = checkAmount();
	if (prev_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";amount:" << prev_amount;
		std::cout << ";withdrawl:refused" << std::endl;
		return (0);
	}
	else
	{
		_nbWithdrawals++;
		_amount -= withdrawal;

		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;

		_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";amount:" << prev_amount;
		std::cout << ";withdrawl:" << withdrawal;
		std::cout << ";amount:" << _amount;
		std::cout << ";nbWithdrawls:" << _nbWithdrawals << std::endl;
	}
	return (1);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}