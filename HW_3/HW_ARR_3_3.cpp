#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int n=10;
    float my_arr[n];
    float min_el;
    float max_el;
    float neg_sum = 0;
    float sum = 0;
    float multip=1;
    float multip_min_max = 1;
    int first_neg_el = -1;
    int second_neg_el = -1;

    srand(time(0));
    for (int i = 0; i<n; ++i)
    {
        my_arr[i] = ((-10000)+(rand()%20000))/(float)100;
        std::cout << my_arr[i] << std::endl;
    };
    min_el = my_arr[0];
    max_el = my_arr[0];

    for (int i = 0; i<n; ++i)
    {
        if (min_el > my_arr[i]) // I find a min. element
        {
            min_el = my_arr[i];
        };
        if (max_el < my_arr[i]) // I find a max. element
        {
            max_el = my_arr[i];
        };
        if (my_arr[i] < 0) // I find the sum of the negative elements
        {
            neg_sum +=my_arr[i];
        };
        if ( i%2 == 0) // I multiply elements with positive numbers
        {
            multip *=my_arr[i];
        };
    };
    for (int i = 0; i<n; ++i) // I find multiplication between min. and max. elements
    {
        if (my_arr[i]> min_el && my_arr[i]< max_el)
            multip_min_max *=my_arr[i];
    };

    for (int i = 0;  i<n; ++i) // I find number of the first negative element
    {
        if (my_arr[i] < 0)
        {
            first_neg_el = i;
            break;
        }
    };
    if (first_neg_el>=0) // if number of the first element is less than zero,
        //then there are no negative elements
    {
        for (int i = first_neg_el;  i<n; ++i)  // I find number of the second negative element.
        {
            if (my_arr[i] < 0)
            {
                second_neg_el = i;
            }
        };
        for (int i =first_neg_el+1; i<=second_neg_el-1; ++i ) //I find the sum between the first and last negative elements
        {
            sum += my_arr[i];
        };
    };

    std::cout << "Sum of the negative elements is " << neg_sum <<std::endl;
    std::cout << "The work of the elements which are between min and max elements is " << multip_min_max <<std::endl;
    std::cout << "The work of elements with even counts is " << multip <<std::endl;
    std::cout << "The sum of the elements which are between the " << std::endl
              << "first and last negative elements is " << sum <<std::endl;
    return 0;
}
