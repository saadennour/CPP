#include <iostream>
#include <climits>

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
    else if (!strcmp(str, "+inf") || !strcmp(str, "+inff"))
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

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Wrong number of arguments\n";
        return (1);
    }
    pseudoliteral(av[1]);
    int code = atoi(av[1]);
    std::cout << code << "\n";
    if (code < 0 || code > 128)
        std::cout << "Char : impossible\n";
    else
        (isprint(code)) ? std::cout << "Char : '" << static_cast<char>(code) << "'\n" : std::cout << "Char : indisplayable\n";
    (code < INT32_MIN || code > INT32_MAX) ? std::cout << "Int : impossible\n" : std::cout << "Int : " << code << "\n";
    (code < 1.17549e-038 || code > 3.40282e+038) ? std::cout << "Float : impossible\n" : std::cout << "Float : " << static_cast<float>(code) << "\n";
    (code < 2.22507e-308 || code > 1.79769e+308) ? std::cout << "Double : impossible\n" : std::cout << "Double : " << static_cast<double>(code) << "\n";
    return (0);
}