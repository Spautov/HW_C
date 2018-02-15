#include <iostream>


int main()
{
    float R1 = 2;
    float R2 = 4;
    float R3 = 8;
    float R0;
    R0 = 1/(1/R1+1/R2+1/R3);
    std::cout << R0 << std::endl;
    return 0;
}
