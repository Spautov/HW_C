#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>


const int n = 10;

int main()
{
    srand(time(0));

    int *point_one = new int [n];
    int *point_two = new int [n];

    for (int i = 0; i < n; ++i)
    {
        *(point_one+i) = rand() % 100;
        std::cout<< std::setw(4)<<*(point_one+i);
    };
    std::cout<< std::endl;

    for (int i = 0; i < n; ++i)
    {
        *(point_two+n-1-i) = *(point_one+i);
    };

    for (int i = 0; i < n; ++i)
    {
        std::cout<< std::setw(4)<<*(point_two+i);
    };
    std::cout<< std::endl;

    delete []point_one;
    delete []point_two;

    return 0;
}
