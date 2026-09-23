#include "easyfind.hpp"


int main()
{
    try
    {
        std::vector<int> numbers;
        numbers.push_back(1);
        numbers.push_back(2);

        std::cout << *easyfind(numbers, 2) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}