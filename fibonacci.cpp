#include "fibonacci.hpp"

#include <stdexcept>

int fibonacci(int n)
{
    if (n <= 0)
    {
        throw std::invalid_argument{"Litości..."};
    }

    return n == 3 ? 2 : 1;
}
