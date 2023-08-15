#include <iostream>
#include <string>

#define LL long long

int main()
{
    std::string str;
    std::cin >> str;

    char z = 'Z';
    LL num = 0;
    LL max = 1;

    for (char b : str)
    {
        if (b == z)
        {
            num += 1;
        }
        else
        {
            if (max < num)
            {
                max = num;
            }
            num = 1;
            z = b;
        }
    }
    if (max < num)
    {
        max = num;
    }
    std::cout << max;
}