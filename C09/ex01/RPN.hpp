#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <cstring>
#include <stack>

class RPN
{
private:
	int head;
	std::stack<int> operation;
public:
	RPN();
	RPN(const RPN &copy);

	RPN &operator=(const RPN &copy);

	void	calculator(char *expression);
	~RPN();
};


#endif