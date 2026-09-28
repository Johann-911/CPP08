#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

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
#include <stack>
#include <stdexcept>

template <typename T>
class MutantStack : public std::stack<T>
{

    public:
        typedef typename std::stack<T>::container_type::iterator iterator;


        MutantStack();
        MutantStack(const MutantStack &copy);
        MutantStack &operator=(const MutantStack &copy);
        ~MutantStack();

        iterator begin();
        iterator end();


};

#include "MutantStack.tpp"

#endif