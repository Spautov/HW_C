#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

const int max_el = 100;
int my_arr[max_el];
int found(int arr[]);
int position = 0;
int min_sum = 0;
int pos = 89;

int main()
{
    srand(time(0));
    for (int i = 0; i<max_el; ++i)
    {
        my_arr[i] = rand()% 101;
        std::cout<< std::setw(4)<<my_arr[i];
    };
    std::cout<< std::endl;

    std::cout<< found(my_arr) << std::endl;
    return 0;
}

int found(int arr[])
{
    if (pos >=0)
    {

        int sum = 0;
        if (pos == 89)
        {
            for (int i = 0; i<10; ++i)
            {
                sum += arr[pos+i];
            };
            min_sum = sum;
            position = pos--;
        }
        else if (pos >=0)
        {
            for (int i = 0; i<10; ++i)
            {
                sum += arr[pos+i];
            };

            if (sum <min_sum)
            {
                min_sum = sum;
                position = pos;
            };
            --pos;
        };
        found(my_arr);
    };
    return position;

}
