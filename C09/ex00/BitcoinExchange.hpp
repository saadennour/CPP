#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange
{
private:
	std::map<int, float> market;
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &copy);

	BitcoinExchange &operator=(const BitcoinExchange &copy);

	void	set_market(std::fstream &file);
	void	set_wallet(std::fstream &file);
	int		check_date(int date);

	~BitcoinExchange();
};



#endif