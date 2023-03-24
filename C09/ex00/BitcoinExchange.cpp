#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(/* args */)
{
	// std::cout << "Constructor has been called !\n";
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	this->market = copy.market;
	return (*this);
}

int	ft_stoi(std::string num, int cas)
{
	int res = 0;
	int	minus = 0;
	
	for (int j = 0; num[j]; j++)
	{
		if (num[j] != '-' && !isdigit(num[j]))
			return (-1);
		while (num[j] == '-')
		{
			minus++;
			j++;
		}
		res = res * 10 + (num[j] - '0');
	}
	if (minus != 2 && cas == 1)
		return (-1);
	return (res);
}

void	BitcoinExchange::set_market(std::fstream &file)
{
	std::string line;
	std::string	key;
	int	occ;

	if (!file.eof())
		std::getline(file, line);
	while (!file.eof())
	{
		std::getline(file, line);
		occ = line.find(",");
		key = line.substr(0, occ);
		market[ft_stoi(key, 0)] = atof(&line[occ+1]);
	}
}

int	BitcoinExchange::check_date(int date)
{
	int	day = date % 100;
	int month = (date % 10000) - date % 100;
	int year = date / 10000;

	if (day < 1 || day > 31)
		return (0);
	if (month < 100 || month > 1200)
		return (0);
	if (year < 2009 || year > 2022)
		return (0);
	return (1);
}

void	BitcoinExchange::set_wallet(std::fstream &file)
{
	std::string line;
	int	key, max;
	float coef, value;
	int	occ;

	max = INT32_MAX;
	while (!file.eof())
	{
		std::map<int, float>::iterator it = market.begin();
		std::getline(file, line);
		occ = line.find("|");
		if (occ + 2 <= (int)line.length() && occ != -1 && ft_stoi(line.substr(0, occ - 1), 1) != -1)
		{
			key = ft_stoi(line.substr(0, occ - 1), 1);
			if (!check_date(key))
			{
				std::cout << "Error: bad input => " << line << "\n";
				continue;
			}
			value = atof(&line[occ+2]);
			while (it != market.end())
			{
				if ((key - it->first <= max && key - it->first >= 0))
				{
					coef = it->second;
					max = key - it->first;
				}
				it++;
			}
			if (value < 0)
				std::cout << "Error: not a positive number.\n";
			else if (value > 1000)
				std::cout << "Error: too large number.\n";
			else
				std::cout << line.substr(0, occ - 1) << " => " << value << " = " <<  coef * value << "\n";
		}
		else
			std::cout << "Error: bad input => " << line << "\n";
	}
}

BitcoinExchange::~BitcoinExchange()
{
	// std::cout << "Destructor has been called !\n";
}