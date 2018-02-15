#include <iostream>

int main()
{
    int number;
    std::cout << "Enter the number A: ";
    std::cin >> number;
    std::cout << "Numbers into which A is divided without residual: " <<std::endl;
    for (int i = 1; i < number; ++i)
    {
        if (!(number%i))
        {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
