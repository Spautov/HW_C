#include <iostream>

int main()
{
    int i = 0;
    int j = 0;
    int sum = 0;

    std::cout << "Enter number: " << std::endl;
    std::cin >> i;
    j = i;
    for (i; i<=500; i++)
        sum+=i;
    std::cout << "sum from " << j << " to 500 is:  " << sum << "\n\n";
    return 0;
}
