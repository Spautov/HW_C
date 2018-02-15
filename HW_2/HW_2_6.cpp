#include <iostream>

int main()
{
    int numbr;
    std::cout << "Enter a number: ";
    std::cin >> numbr;

    for (int i=0; i<=numbr; i++)
        std::cout<< i <<' ';
    return 0;
}
