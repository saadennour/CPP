#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Wrong number of arguments.\n";
		return (-1);
	}
	PmergeMe	sorter;

	sorter.fill(&av[1]);
	return (0);
}