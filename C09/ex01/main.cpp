#include "RPN.hpp"

int main(int ac, char **av)
{
	RPN	lewa;
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments !\n";
		return (-1);
	}
	lewa.calculator(av[1]);
	return (0);
}