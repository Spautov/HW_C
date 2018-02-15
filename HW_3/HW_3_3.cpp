#include <iostream>

int main()
{
    int amount = 0;
    int digit1;
    int digit10;
    int digit100;

    for (int i = 100; i<1000; ++i)
    {
        digit1 = i%10;
        digit10 = (i/10)%10;
        digit100 = i/100;
        if ((digit1!=digit10) && (digit1!=digit100) && (digit10!=digit100))
        {
            ++amount;
        }
    }
    std::cout << "Quantity of numbers with different digits from 100 to 999 is: " << amount << std::endl;
    return 0;
}
