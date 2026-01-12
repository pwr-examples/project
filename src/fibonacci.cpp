#include "fibonacci.hpp"

#include <stdexcept>

int fibonacci(int n)
{
    if (n <= 0)
    {
        throw std::invalid_argument{"Litości..."};
    }

    if (n == 1 or n == 2)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
