#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

void arr_init(int n, int[][]);
void arr_init(int n, double[][]);

int main()
{
    std::cout << "Hello world!" << std::endl;
    return 0;
}

void arr_init(int n, int arr[][])
{
    srand(time(0));
    for (int i = 0; i<n; ++i)
    {
        for (int j = 0; j<n; ++j)
        {
            arr[i][j] = (rand() % 101);
            std::cout << std:: setw(4) << arr[i][j];
        };
        std::cout << std::endl;
    };
}

void arr_init(int n, double arr[][])
{
    srand(time(0));
    for (int i = 0; i<n; ++i)
    {
        for (int j = 0; j<n; ++j)
        {
            arr[i][j] = (rand() % 10001)/100;
            std::cout << std:: setw(4) << arr[i][j];
        };
        std::cout << std::endl;
    };
    return;
}
