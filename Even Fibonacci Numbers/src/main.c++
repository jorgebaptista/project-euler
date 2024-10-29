#include <iostream>

int main()
{
    int sum = 0;
    int first = 1;
    int second = 0;

    for (int i = 1; i <= 4000000;)
    {
        first = i;
        i += second;
        second = first;

        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    std::cout << sum << std::endl;
}