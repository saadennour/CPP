#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	BitcoinExchange	binance;
	std::fstream	database;
	std::fstream	file;

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments !!\n";
		return (-1);
	}
	database.open("data.csv", std::ios::in);
	file.open (av[1], std::ios::in);
	if (!database || !file)
	{
		std::cout << "The database or the file provided could not open\n";
		return (-1);
	}
	binance.set_market(database);
	binance.set_wallet(file);
	return (0);
}