#include <iostream>

int main()
{
    float cost92;
    float cost95;
    float cost98;
    float gas_cons92;
    float gas_cons95;
    float gas_cons98;
    std::cout << "Enter the cost and a consumption of gasoline 92: " << std::endl;
    std::cin >> cost92 >> gas_cons92;
    std::cout << "Enter the cost and a consumption of gasoline 95: " << std::endl;
    std::cin >> cost95 >> gas_cons95;
    std::cout << "Enter the cost and a consumption of gasoline 98: " << std::endl;
    std::cin >> cost98 >> gas_cons98;
    std::cout << "The cost of a trip at 92 gasoline is: " << (cost92 * gas_cons92) <<std::endl;
    std::cout << "The cost of a trip at 95 gasoline is: " << (cost95 * gas_cons95) <<std::endl;
    std::cout << "The cost of a trip at 98 gasoline is: " << (cost98 * gas_cons98) <<std::endl;
    return 0;
}
