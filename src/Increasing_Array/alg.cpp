#include <iostream>

#define LL long long

int main()
{
    LL k, sum = 0, a, b;
    std::cin >> k;

    std::cin >> a;
    for (int i = 1; i < k; i++)
    {
        std::cin >> b;
        if (a > b)
        {
            sum += a - b;
        }
        else
        {
            a = b;
        }
    }

    std::cout << sum;
}
