#include <iostream>

void perfect_number(int start, int finish);

int main()
{
    int first_num;
    int second_num;
    do
    {
        std::cout << "Enter the beginning of range: ";
        std::cin >> first_num;
        if (first_num <=0)
        {
            std::cout << "The beginning of range has to be more null " << std::endl;
        }
    }
    while(first_num <=0);
    do
    {
        std::cout << "Enter the end of range: ";
        std::cin >> second_num;
        if (second_num<first_num)
        {
            std::cout << "The end of range has to be more that the beginning of range " << std::endl;
        }
    }
    while (second_num<first_num);
    perfect_number(first_num, second_num);
    return 0;
}

void perfect_number(int start, int finish)
{
    std::cout << "perfect number is: " << std::endl;
    int resolt;
    int amount = 0;
    for (int i = start; i <= finish; ++i)
    {
        resolt = 0;
        for (int j = 1; j <= (i-1); ++j )
        {
            if (i%j==0)
            {
                resolt +=j;
            }
        };
        if (resolt == i)
        {
            std::cout << i << std::endl;
            ++amount;
        }

    };
    if (!amount)
    {
        std::cout << "it is not perfect number" << std::endl;
    }
}
