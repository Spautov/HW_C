#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

const int n = 5; // Array size
const int m = 8; // Array size
void print_arr(int arr[n][m]);
void shiftU(int arr[n][m]);
void shiftD(int arr[n][m]);
void shiftL(int arr[n][m]);
void shiftR(int arr[n][m]);

int main()
{
    int my_arr[n][m];
    srand(time(0));
    char select;
    int iteration;
    for (int i = 0; i<n; ++i)
    {
        for (int j=0; j<m; ++j)
        {
            my_arr[i][j] = (rand()%101);
        }
    }
    print_arr(my_arr);
    do
    {
        std::cout<< "Choose the direction of shift: "<<std::endl;
        std::cout<<" - t - top "<<std::endl;
        std::cout<<" - b - bottom "<<std::endl;
        std::cout<<" - l - left "<<std::endl;
        std::cout<<" - r - right "<<std::endl;
        std::cin >> select;
        std::cout<< "Enter the number of shifts: "<<std::endl;
        std::cin >> iteration;
        switch(select)
        {
        case 't':
        {
            for (int i = 0; i<iteration; ++i)
            {
                shiftU(my_arr);
            }
            break;
        }
        case 'b':
        {
            for (int i = 0; i<iteration; ++i)
            {
                shiftD(my_arr);
            }
            break;
        }
        case 'l':
        {
            for (int i = 0; i<iteration; ++i)
            {
                shiftL(my_arr);
            }
            break;
        }
        case 'r':
        {
            for (int i = 0; i<iteration; ++i)
            {
                shiftR(my_arr);
            }
            break;
        }
        };
        print_arr(my_arr);
        std::cout<<" Do you wish to continue? y/n "<<std::endl;
        std::cin >> select;
    }
    while (select != 'n');

    return 0;
}


void print_arr(int arr[n][m])
{
    for (int i = 0; i<n; ++i)
    {
        for (int j=0; j<m; ++j)
        {
            std::cout <<std::setw(4) << arr[i][j];
        };
        std::cout<<std::endl;
    };
    std::cout<<std::endl;
    std::cout<<std::endl;
};

void shiftU(int arr[n][m])
{
    int serv_arr[m];
    for (int i = 0; i<m; ++i)
    {
        serv_arr[i] = arr[0][i];

    };
    for (int i = 0; i<(n-1); ++i)
    {
        for (int j=0; j<m; ++j)
        {
            arr[i][j] = arr[i+1][j];
        };
    };
    for (int i = 0; i<m; ++i)
    {
        arr[n-1][i] = serv_arr[i];
    };
}

void shiftD(int arr[n][m])
{
    int serv_arr[m];
    for (int i = 0; i<m; ++i)
    {
        serv_arr[i] = arr[n-1][i];

    };
    for (int i = (n-1); i>0; --i)
    {
        for (int j=0; j<m; ++j)
        {
            arr[i][j] = arr[i-1][j];
        };
    };
    for (int i = 0; i<m; ++i)
    {
        arr[0][i] = serv_arr[i];
    };
}

void shiftL(int arr[n][m])
{
    int serv_arr[n];
    for (int i = 0; i<n; ++i)
    {
        serv_arr[i] = arr[i][0];

    };
    for (int i = 0; i<(m-1); ++i)
    {
        for (int j=0; j<n; ++j)
        {
            arr[j][i] = arr[j][i+1];
        };
    };
    for (int i = 0; i<n; ++i)
    {
        arr[i][m-1] = serv_arr[i];
    };
}

void shiftR(int arr[n][m])
{
    int serv_arr[n];
    for (int i = 0; i<n; ++i)
    {
        serv_arr[i] = arr[i][m-1];

    };
    for (int i = (m-1); i>0; --i)
    {
        for (int j=0; j<n; ++j)
        {
            arr[j][i] = arr[j][i-1];
        };
    };
    for (int i = 0; i<n; ++i)
    {
        arr[i][0] = serv_arr[i];
    };
}
