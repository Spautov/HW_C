#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>


const int n = 11;

int main()
{
    srand(time(0));
    int *parr = new int [n];
    for (int i = 0; i < n; ++i)
    {
        *(parr+i) = rand() % 100;
        std::cout<< std::setw(4)<<*(parr+i);
    };
    std::cout<< std::endl;
    int *temp = new int(0);
    for (int i = 0; i<(n/2); ++i)
    {
        *temp = *(parr+i);
        *(parr+i) = *(parr+n-1-i);
        *(parr+n-1-i) = *temp;
    };
    for (int i = 0; i < n; ++i)
    {
        std::cout<< std::setw(4)<<*(parr+i);
    };
    std::cout<< std::endl;

    delete []parr;
    delete temp;
    return 0;
}
