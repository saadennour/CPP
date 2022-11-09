#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

typedef struct Data
{
    int data;
    Data(int _data);
}   Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

std::ostream&   operator<<(std::ostream& out, const Data& ptr);

#endif