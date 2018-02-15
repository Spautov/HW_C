#include <iostream>

int main()
{
    int  profit[12];
    int initial_month;
    int final_month;
    int min_num;
    int max_num;

    for (int i=0; i<12; ++i)
    {
        std::cout << "Enter profit of month #" << (i+1) << " : ";
        std::cin >> profit[i];
    }
    do
    {
        std::cout << "Enter initial month: ";
        std::cin >> initial_month;
        std::cout << "Enter final month: ";
        std::cin >> final_month;
        if ((initial_month<1 || initial_month > 12)||(final_month < 1 || final_month > 12)||(final_month < initial_month))
        {
            std::cout << "Enter correct range " << std::endl;
        }
    }
    while ((initial_month<1 || initial_month > 12)||(final_month < 1 || final_month > 12)||(final_month < initial_month));
    --initial_month;
    --final_month;
    min_num = profit[initial_month];
    max_num = profit[initial_month];

    for (int i = initial_month; i <= final_month; ++i)
    {
        if (min_num > profit[i])
        {
            min_num = profit[i];
        }
        if (max_num < profit[i])
        {
            max_num = profit[i];
        }
    };
    std::cout << "Min profit from " << (initial_month+1) << " month to "
              << (final_month+1) << " month is " << min_num << std::endl;
    std::cout << "Max profit from " << (initial_month+1) << " month to "
              << (final_month+1) << " month is " << max_num << std::endl;
    return 0;
}
