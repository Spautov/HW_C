#include <iostream>

int main()
{
    int X = 0;
    int Y = 0;
    int res = 1;

    std::cout << "For construction of X in degree Y" << std::endl;
    std::cout << "Enter X: ";
    std::cin >> X;
    std::cout << "Enter Y: ";
    std::cin >> Y;
    for (int i = 1; i<=Y; i++)
        res *= X;
    std::cout << "X in degree Y is: " << res << std::endl;

    return 0;
}
