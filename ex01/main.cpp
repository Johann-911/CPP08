#include "Span.hpp"


int main()
{
    try
    {
        std::vector<int> numbers;

        numbers.push_back(10);
        numbers.push_back(20);
        numbers.push_back(30);
        Span sp(3);
        sp.addNumber(numbers.begin(), numbers.end());

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << " error: " << e.what() << std::endl;
    }
    return 0;

}