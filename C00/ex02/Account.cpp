/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:37:11 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/12 02:14:10 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
	std::cout << "Default constructor has been called\n";
}

Account::Account(int initial_deposit)
{
	static int index;
	_amount = initial_deposit;
	_accountIndex = index;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	index++;
	std::cout << "Constructor has been called\n";
}

Account::~Account(void)
{
	std::cout << "Destructor has been called\n";
}

void	Account::makeDeposit( int deposit )
{
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (_amount < 100)
		return (0);
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	return (1);
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	std::cout << Account::getNbAccounts() << " ana status\n";
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

int	Account::getindex(void)
{
	return (this->_accountIndex);
}

int	Account::getamount(void)
{
	return (this->_amount);
}

int Account::getndeposits(void)
{
	return (this->_nbDeposits);
}

int	Account::getnwithdrawals(void)
{
	return (this->_nbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "accounts:" << getNbAccounts() ;
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawal:" << getNbWithdrawals() << "\n";
}