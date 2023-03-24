#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>

class PmergeMe
{
private:
	std::vector<int> vec;
	std::deque<int> deq;
public:
	PmergeMe();
	PmergeMe(const PmergeMe &copy);

	PmergeMe	&operator=(const PmergeMe &copy);

	void	fill(char **arg);
	void	v_insertion(std::vector<int>::iterator &start, std::vector<int>::iterator &end);
	void	v_sort(std::vector<int>::iterator &start, std::vector<int>::iterator &end);
	void	v_merging(std::vector<int>::iterator &start, std::vector<int>::iterator &mid, std::vector<int>::iterator &end);

	void	d_insertion(std::deque<int>::iterator &start, std::deque<int>::iterator &end);
	void	d_sort(std::deque<int>::iterator &start, std::deque<int>::iterator &end);
	void	d_merging(std::deque<int>::iterator &start, std::deque<int>::iterator &mid, std::deque<int>::iterator &end);

	~PmergeMe();
};


#endif