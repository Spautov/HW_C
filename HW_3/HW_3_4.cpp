#include <iostream>

int main()
{
    unsigned int number;
    unsigned int numout = 0;
    int num;
    int digit=0;
    std::cout << "Enter a number: ";
    std::cin >> number;
    while (number > 0)
    {
        num = number%10;
        number /=10;
        if (num != 3 && num != 6)
        {
            ++digit;
            for (int i=1; i<=(digit-1); ++i)
            {
                num *=10;
            }
            numout +=num;
        }
    }
    std::cout << numout << std::endl;
    return 0;
}
