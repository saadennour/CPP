#include "RPN.hpp"

RPN::RPN(/* args */)
{
}

RPN::RPN(const RPN &copy)
{
	*this = copy;
}

RPN	&RPN::operator=(const RPN &copy)
{
	this->head = copy.head;
	this->operation = copy.operation;
	return (*this);
}

void	RPN::calculator(char *expression)
{
	int	num = 0;

	for (int i = 0; expression[i]; i++)
	{
		if (!isdigit(expression[i]) && !strchr(" \t\r\v*+-/", expression[i]))
		{
			std::cout << "Error.\n";
			exit (0);
		}
	}
	for (int i = 0; expression[i]; i++)
	{
		if (isdigit(expression[i]))
		{
			num = expression[i] - '0';
			operation.push(num);
		}
		else if (expression[i] == ' ')
			continue;
		else
		{
			head = operation.top();
			operation.pop();
			if (operation.size() > 0)
			{
				switch (expression[i])
				{
					case '+':
						head = operation.top() + head;
						break;
					case '-':
						head = operation.top() - head;
						break;
					case '*':
						head = operation.top() * head;
						break;
					case '/':
						head = operation.top() / head;
						break;
					default:
						std::cout << "Your expression is wrong.\n";
						exit (0);
				}
				operation.pop();
				operation.push(head);
			}
			else
			{
				std::cout << "Your expression is wrong.\n";
				exit (0);
			}
		}
	}
	if (operation.size() != 1)
	{
		std::cout << "Your expression is wrong.\n";
		exit (0);
	}
	std::cout << operation.top() << "\n";
}


RPN::~RPN()
{
}
