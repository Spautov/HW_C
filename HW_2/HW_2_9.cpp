#include <iostream>

int main()
{
    int numbr;
    int sum =0;
    std::cout << "Enter numbers:" << std::endl;
    do
    {
        std::cin >> numbr;
        sum += numbr;
    }
    while (numbr != 0);
    std::cout << "The sum of the numbers is: " << sum << std::endl;
    return 0;
}
