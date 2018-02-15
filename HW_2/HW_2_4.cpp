#include <iostream>

int main()
{
    int a;
    unsigned int sum=1;

    do
    {
        std::cout << "Enter a number from 1 to 20: ";
        std::cin >> a;
        if ((a<1)||(a>20))
        {
            std::cout << "the number isn't in the range from 1 to 20 " << std::endl;
        }
    }
    while ((a<1)||(a>20));

    for (int i = a; i<=20; i++)
        sum*=i;
    std::cout << "work from " << a << " to 20 is: " << sum << std::endl;
    return 0;
}
