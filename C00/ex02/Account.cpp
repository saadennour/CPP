/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:37:11 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/12 00:32:59 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal < 100)
		return (0);
	return (1);
}

void	Account::makeDeposit( int deposit )
{
	(void)deposit;
	return ;
}

void	Account::displayStatus( void ) const
{
	Account::getNbAccounts();
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "Account::getNbAccounts()" << std::endl;
}
