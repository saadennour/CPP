#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t p = reinterpret_cast<uintptr_t>(ptr);
    return p;
}

Data::Data(int _data)
{
    data = _data;
}

Data* deserialize(uintptr_t raw)
{
    Data *p = new Data(2);
    p = reinterpret_cast<Data*>(raw);
    return (p);
}

std::ostream&   operator<<(std::ostream& out, const Data& ptr)
{
    out << ptr.data;
    return (out);
}