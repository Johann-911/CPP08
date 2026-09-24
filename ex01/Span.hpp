#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <string>
#include <exception>
#include <stdbool.h>
#include <climits>
#include <stdexcept>
#include <utility>
#include <cmath>
#include <algorithm>
#include <stdexcept>


class Span 
{
    private:
        unsigned int _n;
        std::vector<int> _values;

    public: 
        Span();
        Span(unsigned int n);   
        Span(const Span &copy);
        Span &operator=(const Span &copy);
        ~Span();

        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
};


#endif
