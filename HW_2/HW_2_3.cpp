#include <iostream>


int main()
{
    int sum=0;
    float Sar = 0;
    for (int i=1; i<=1000; i++)
        sum +=i;
    Sar = sum / (float)1000;
    std:: cout << "Arithmetic-mean is: " << Sar << std::endl;

    return 0;
}
