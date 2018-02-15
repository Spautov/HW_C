#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    int in_arr[10];
    int out_arr1[5];
    int out_arr2[5];
    srand(time(0));
    for (int i = 0; i<10; ++i)
    {
       in_arr[i] = (rand()%101);
    };

    for (int i = 0; i<10; ++i)
    {
        if (i<5)
        {
            out_arr1[i] = in_arr[i];
        }
        else
        {
            out_arr2[i-5] = in_arr[i];
        }
    };
    std::cout << "initial array: " << std::endl;

    for (int i = 0; i<10; ++i)
    {
        std::cout << "#" << (i+1) << " " << in_arr[i] << std::endl;
    };
    std::cout << std::endl;
    std::cout << "terminating array 1: " << std::endl;
    for (int i = 0; i<5; ++i)
    {
        std::cout << "#" << (i+1) << " " << out_arr1[i] << std::endl;
    };
    std::cout << std::endl;
    std::cout << "terminating array 2: " << std::endl;
    for (int i = 0; i<5; ++i)
    {
        std::cout << "#" << (i+1) << " " << out_arr2[i] << std::endl;
    };
    std::cout << std::endl;
    return 0;
}
