#include "Span.hpp"

Span::Span() : _n(0)
{
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(const Span &copy) : _n(copy._n) ,_values(copy._values)
{
} 

Span &Span::operator=(const Span &copy)
{
    if(this != &copy)
    {
        _n = copy._n;
        _values = copy._values;
    }
    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int number)
{
    if(_values.size() >= _n)
        throw std::out_of_range("index out of range ");
    _values.push_back(number); 
}


int Span::shortestSpan()
{
    if(_values.size() < 2)
        throw std::runtime_error(" need more numbers");
    std::sort(_values.begin(), _values.end());
    int number;
    int min_val = _values[1] - _values[0];
    for(size_t i = 1; i < _values.size(); i++)
    {
        number = _values[i] - _values[i - 1];     
        if(number < min_val)  
            min_val = number; 
    }
    return min_val;
}

int Span::longestSpan()
{   
    if(_values.size() < 2)
        throw std::runtime_error(" need more numbers");
    std::sort(_values.begin(), _values.end());
    int res = (_values[_values.size() - 1] - _values[0]) ;
    return res;
}