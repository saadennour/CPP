/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:36:59 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/12 02:28:29 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef _ACCOUNT_HPP
#define _ACCOUNT_HPP
#include <iostream>

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;

	static int	getNbAccounts( void ){
		return (_nbAccounts);
	};
	static int	getTotalAmount( void ){
		return (_totalAmount);
	};
	static int	getNbDeposits( void ){
		return (_totalNbDeposits);
	};
	static int	getNbWithdrawals( void ){
		return (_totalNbWithdrawals);
	};
	static void	displayAccountsInfos( void );

	Account( int initial_deposit ){
		_amount = initial_deposit;
	};
	~Account( void ){};

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;

	Account( void )
	{
		_nbAccounts++;
	};

private:

	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void );

	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;


};

// int	Account::getNbAccounts( void )
// {
// 	return (_nbAccounts);
// }

// int	Account::getTotalAmount( void )
// {
// 	return (_totalAmount);
// }

// int	Account::getNbDeposits( void )
// {
// 	return (_totalNbDeposits);
// }

// int	Account::getNbWithdrawals( void )
// {
// 	return (_totalNbWithdrawals);
// }

// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */