#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

int main()
{
    const int n = 10; // Array size
    const int m = 10; // Array size
    int my_arr[n][m];
    int sum_heidht[n];
    int sum_width[m+1];
    srand(time(0));
    for (int i = 0; i<n; ++i)
    {
        for (int j = 0; j<m; ++j)
        {
            my_arr[i][j] = (rand() % 101);
            std::cout << std::setw(4) << my_arr[i][j];
            sum_width[j] = 0;
        };
        std::cout << std::endl;
        sum_heidht[i] = 0;
    };
    sum_width[m] = 0;
    std::cout << std::endl;

    for (int i = 0; i<n; ++i)
    {
        for (int j = 0; j<m; ++j)
        {
            sum_heidht[i] += my_arr[i][j];
        };
    };
    for (int i = 0; i<m; ++i)
    {
        for (int j = 0; j<n; ++j)
        {
            sum_width[i] += my_arr[j][i];
        };
        sum_width[m] += sum_width[i];
    };

    for (int i = 0; i<n; ++i)
    {
        for (int j = 0; j<m; ++j)
        {
            std::cout << std::setw(4) << my_arr[i][j];
        };
        std::cout<< "  | "<< std::setw(4) << sum_heidht[i];
        std::cout << std::endl;
    };
    for (int i= 0; i < m+2; ++i)
    {
        std::cout<< "----";
    };
    std::cout << std::endl;
    for (int i= 0; i < m; ++i)
    {
        std::cout << std::setw(4) << sum_width[i];
    };
    std::cout<< "  | "<< std::setw(4) << sum_width[m];
    std::cout << std::endl;

    return 0;
}
