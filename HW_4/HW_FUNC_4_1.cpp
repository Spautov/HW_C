#include <iostream>

float deg(int a, int b);

int main()
{
    int bas;
    int exp;
    std::cout << "Enter basis of degree: ";
    std::cin >> bas;
    std::cout << "Enter exponent: ";
    std::cin >> exp;
    std::cout << bas <<" in degree of " << exp << " is " << deg(bas,exp) << std::endl;
    return 0;
}

float deg(int a, int b)
{
    float resolt = 1;
    if (b>=0)
    {
        for (int i = 0; i<b; ++i)
        {
            resolt *= a;
        };
    }
    else
    {
        for (int i = 0; i<b*(-1); ++i)
        {
            resolt /= (float)a;
        };
    }
    return resolt;
}
