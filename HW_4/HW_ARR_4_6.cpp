#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

int main()
{
    int big_arr[5][10];
    int small_arr[5][5];
    srand(time(0));
    for (int i = 0; i<5; ++i)
    {
        for (int j = 0; j<10; ++j)
        {
            big_arr[i][j] = (rand() % 51);
            std::cout << std:: setw(4) << big_arr[i][j];
        };
        std::cout << std::endl;
    };
    std::cout << std::endl;
    std::cout << std::endl;
    for (int i = 0; i<5; ++i)
    {
        for (int j = 0; j<5; ++j)
        {
            small_arr[i][j] = big_arr[i][j*2] + big_arr[i][j*2+1];
            std::cout << std::setw(4) << small_arr[i][j];
        };
        std::cout << std::endl;
    };

    return 0;
}
