#include "PmergeMe.hpp"

PmergeMe::PmergeMe(/* args */)
{
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	*this = copy;
}


PmergeMe	&PmergeMe::operator=(const PmergeMe &copy)
{
	(void)copy;
	this->vec.swap
	return (*this);
}

void	PmergeMe::fill(char **arg)
{
	clock_t time = clock();

	for (int i = 0; arg[i]; i++)
	{
		int ac = atoi(arg[i]);
		if (ac < 0)
		{
			std::cout << "Error.\n";
			exit (0);
		}
		vec.push_back(ac);
		deq.push_back(ac);
	}
	std::deque<int>::iterator it = deq.begin();
	std::deque<int>::iterator d_end = deq.end();
	std::cout << "Before : ";
	while (it != deq.end())
	{
		std::cout << *it << " ";
		it++;
	}
	it = deq.begin();
	std::cout << std::endl << std::endl;
	std::vector<int>::iterator vit = vec.begin();
	std::vector<int>::iterator vi_end = vec.end();
	v_sort(vit, vi_end);
	clock_t f_time = clock();
	clock_t db_time = clock();
	d_sort(it, d_end);
	clock_t da_time = clock();
	std::cout << "After : ";
	while (it != deq.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl << std::endl;
	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << (float)(f_time - time)/CLOCKS_PER_SEC << " us\n";
	std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " <<  (float)(da_time - db_time)/CLOCKS_PER_SEC << " us\n";
}

void	PmergeMe::v_insertion(std::vector<int>::iterator &start, std::vector<int>::iterator &end)
{
	int swap;
	
	std::vector<int>::iterator tmp = start;
	tmp++;
	while (tmp != end)
	{
		std::vector<int>::iterator it = start;
		while (it != tmp)
		{
			if (*it > *tmp)
			{
				swap = *it;
				*it = *tmp;
				*tmp = swap;
			}
			it++;
		}
		tmp++;
	}
}

void	PmergeMe::v_sort(std::vector<int>::iterator &start, std::vector<int>::iterator &end)
{
	if (end - start <= 5)
	{
		v_insertion(start, end);
		return ;
	}
	std::vector<int>::iterator	mid = start + (end - start) / 2;
	v_sort(start, mid);
	v_sort(mid, end);
	v_merging(start, mid, end);
}

void	PmergeMe::v_merging(std::vector<int>::iterator &start, std::vector<int>::iterator &mid, std::vector<int>::iterator &end)
{
	std::vector<int> left;
	std::vector<int> right;
	size_t l_limit = mid - start;
	size_t r_limit = end - mid;

	for (size_t i = 0; i < l_limit; i++)
		left.push_back(*(start + i));
	for (size_t i = 0; i < r_limit; i++)
		right.push_back(*(mid + i));
	std::vector<int>::iterator it = start;
	std::vector<int>::iterator l_it = left.begin();
	std::vector<int>::iterator r_it = right.begin();
	while (l_it != left.end() && r_it != right.end())
	{
		if (*l_it <= *r_it)
		{
			*it = *l_it;
			l_it++;
		}
		else
		{
			*it = *r_it;
			r_it++;
		}
		it++;
	}
	while (l_it != left.end() && it != vec.end())
	{
		*it = *l_it;
		l_it++;
		it++;
	}
	while (r_it != right.end() && it != vec.end())
	{
		*it = *r_it;
		r_it++;
		it++;
	}
}

void	PmergeMe::d_insertion(std::deque<int>::iterator &start, std::deque<int>::iterator &end)
{
	int swap;
	
	std::deque<int>::iterator tmp = start;
	tmp++;
	while (tmp != end)
	{
		std::deque<int>::iterator it = start;
		while (it != tmp)
		{
			if (*it > *tmp)
			{
				swap = *it;
				*it = *tmp;
				*tmp = swap;
			}
			it++;
		}
		tmp++;
	}
}

void	PmergeMe::d_sort(std::deque<int>::iterator &start, std::deque<int>::iterator &end)
{
	if (end - start <= 5)
	{
		d_insertion(start, end);
		return ;
	}
	std::deque<int>::iterator	mid = start + (end - start) / 2;
	d_sort(start, mid);
	d_sort(mid, end);
	d_merging(start, mid, end);
}

void	PmergeMe::d_merging(std::deque<int>::iterator &start, std::deque<int>::iterator &mid, std::deque<int>::iterator &end)
{
	std::deque<int> left;
	std::deque<int> right;
	size_t l_limit = mid - start;
	size_t r_limit = end - mid;

	for (size_t i = 0; i < l_limit; i++)
		left.push_back(*(start + i));
	for (size_t i = 0; i < r_limit; i++)
		right.push_back(*(mid + i));
	std::deque<int>::iterator it = start;
	std::deque<int>::iterator l_it = left.begin();
	std::deque<int>::iterator r_it = right.begin();
	while (l_it != left.end() && r_it != right.end())
	{
		if (*l_it <= *r_it)
		{
			*it = *l_it;
			l_it++;
		}
		else
		{
			*it = *r_it;
			r_it++;
		}
		it++;
	}
	while (l_it != left.end() && it != deq.end())
	{
		*it = *l_it;
		l_it++;
		it++;
	}
	while (r_it != right.end() && it != deq.end())
	{
		*it = *r_it;
		r_it++;
		it++;
	}
}

PmergeMe::~PmergeMe()
{
}
