#include <iostream>
#include <math.h>

int main()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    for (int i = 1; i<= sqrt(number); ++i)
    {
        if ( !(number%(i*i)) && (number%(i*i*i)) )
        {
            std::cout << i << std::endl;
        }
    }
     return 0;
}
