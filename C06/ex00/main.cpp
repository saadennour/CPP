#include <iostream>
#include <climits>
#include <iomanip>

#define	DOUBLE_MIN -1.79769e+308
#define	DOUBLE_MAX 1.79769e+308
#define	FLOAT_MIN -1.17549e+038
#define	FLOAT_MAX 3.40282e+038

void    pseudoliteral(char  *str)
{
    if (!strcmp(str, "nan") || !strcmp(str, "nanf"))
    {
        std::cout << "Char : impossible\n";
        std::cout << "Int : impossible\n";
        std::cout << "Float : nanf\n";
        std::cout << "Double : nan\n";
    }
    else if (!strcmp(str, "-inf")|| !strcmp(str, "-inff"))
    {
        std::cout << "Char : impossible\n";
        std::cout << "Int : impossible\n";
        std::cout << "Float : -inff\n";
        std::cout << "Double : -inf\n";
    }
    else if (!strcmp(str, "+inf") || !strcmp(str, "+inff") || !strcmp(str, "inf") || !strcmp(str, "inff"))
    {
        std::cout << "Char : impossible\n";
        std::cout << "Int : impossible\n";
        std::cout << "Float : +inff\n";
        std::cout << "Double : +inf\n";
    }
    else
        return ;
    exit (0);
}

void	PrintChar(char *av)
{
    int code = atoi(av);

    if (code < 0 || code > 128)
        std::cout << "Char : impossible\n";
    else if (isdigit(av[0]))
        (isprint(code)) ? std::cout << "Char : '" << static_cast<char>(code) << "'\n" : std::cout << "Char : Non displayable\n";
	else
		std::cout << "Chaar : '" << av[0] << "'\n";
}

void	PrintFloat(double code)
{
	if (static_cast<float>(code) < FLOAT_MIN)
		std::cout << "Float : -inff\n";
	else
	{
		std::cout << std::setprecision(1) << std::fixed;
    	(static_cast<float>(code) > FLOAT_MAX) ? std::cout << "Float : +inff\n" : std::cout << "Float : " << static_cast<float>(code) << "f\n";
	}
}

void	PrintDouble(double dcode)
{
	if (dcode < DOUBLE_MIN)
		std::cout << "Double : -inf\n";
	else
	{
		std::cout << std::setprecision(1) << std::fixed;
    	(dcode > DOUBLE_MAX) ? std::cout << "Double : +inf\n" : std::cout << "Double : " << dcode <<"\n";
	}
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Wrong number of arguments\n";
        return (1);
    }
    pseudoliteral(av[1]);

    long code = atol(av[1]);
	double dcode = atof(av[1]);

	PrintChar(av[1]);
    (code < INT32_MIN || code > INT32_MAX) ? std::cout << "Int : impossible\n" : std::cout << "Int : " << code << "\n";
	PrintFloat(dcode);
	PrintDouble(dcode);
	return (0);
}