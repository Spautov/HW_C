#include <iostream>

int main()
{
    int numberA;
    int numberB;
    std::cout << "Enter the number A: ";
    std::cin >> numberA;
    std::cout << "Enter the number B: ";
    std::cin >> numberB;
    std::cout << "Numbers into which A and B is divided without residual: " <<std::endl;
    int k;
    k = (numberA < numberB) ? numberA : numberB;
    for (int i = 1; i <=k; ++i)
    {
        if ( (numberA%i == 0)&&(numberB%i == 0) )
        {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
