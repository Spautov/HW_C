#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int n = 10; // Array size
    int my_arr[n];
    int min_num;
    int max_num;
    srand(time(0));
    for (int i = 0; i<n; ++i)
    {
        my_arr[i] = (rand()%101);
        std::cout << my_arr[i] << std::endl;
    }
    min_num = my_arr[0];
    max_num = my_arr[0];
    for (int i = 0; i<n; ++i)
    {
        if (min_num > my_arr[i])
        {
            min_num = my_arr[i];
        }
        if (max_num < my_arr[i])
        {
            max_num = my_arr[i];
        }
    }
    std::cout << "Min = "<<  min_num << std::endl;
    std::cout << "Max = " << max_num << std::endl;
    return 0;
}
