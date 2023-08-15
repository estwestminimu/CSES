#include <iostream>

int main()
{
    long n, sum = 0;
    std::cin >> n;

    for (long i = 1; i < n; i++)
    {
        long a = 0;
        std::cin >> a;
        sum += a;
    }

    // sum of the series
    std::cout << ((n + 1) * n) / 2 - sum;
}