#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>


int main()
{
    const int n = 15;
    int first_arr[n];
    int second_arr[n];
    int third_arr[n];

    srand(time(0));
    for (int i = 0; i<n; ++i)
    {
        first_arr[i] = (rand()%101);
        second_arr[i] = (rand()%101);
    };
    for (int i = 0; i<n; ++i)
    {
        third_arr[i] = first_arr[i] + second_arr[i];
    };

    for (int i = 0; i<n; ++i)
    {
        std::cout << "#" << std::setw(2) << (i+1) << ": " << std::setw(3)<< first_arr[i]
        << " + "<< std::setw(3)<< second_arr[i]<< " = " << std::setw(3)<< third_arr[i]<<std::endl;
    };
    std::cout << std::endl;
    return 0;
}
