#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
    const std::string name;
    bool    signature;
    const int grade;
    const int exec;
public:
    Form();
    Form(std::string _name, bool sign, int _grade, int _exec);
    Form(const Form& copy);

    Form&   operator=(const Form& copy);

    std::string getName();
    bool        getSing();
    int         getGrade();
    int         getExec();

    void        beSigned(Bureaucrat &client);


    ~Form();
};

#endif