#include <iostream>
#include <process.h>

int numberDig(int num)
{
    float resolt = 0;
    int digit = 1;
    if (num > 0)
    {
        digit = 0;
        while (num > 0)
        {
            resolt += num % 10;
            ++digit;
            num /=10;
        }
    }
    resolt /= (float)(digit);
    std::cout << "Number of digits is - " << digit <<std::endl;
    std::cout << "Arithmetic average is - " << resolt <<std::endl;
    return 0;
};


int numberZero(int num)
{
    int digit = 1;
    if (num > 0)
    {
        digit = 0;
        while (num > 0)
        {
            if (!(num%10))
            {
                ++digit;
            }
            num /=10;
        }
    }
    std::cout << "Number of zero is - " << digit <<std::endl;
    return 0;
};

int main()
{
    int number;
    char ask;

    do
    {
        std::cout << "Enter a number: ";
        std::cin >> number;
        std::cout << "Select: " << std::endl;
        std::cout << "- 1 - number of digits and arithmetic average" << std::endl;
        std::cout << "- 2 - number of zero" << std::endl;
        int select;
        std::cin >> select;
        switch (select)
        {
        case 1:
        {
            numberDig(number);
            break;
        }
        case 2:
        {
            numberZero(number);
        }
        }
        std::cout << "Would you like to continue (y / n): ";
        std::cin >> ask;
        std::cout<<std::endl;
    }
    while (ask != 'n');
    return 0;
}
