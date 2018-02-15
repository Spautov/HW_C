#include <iostream>

int main()
{
    float Lcircle;
    float Scircle;
    const float Pi = 3.14;
    std::cout << "Enter circle length: ";
    std::cin >> Lcircle;
    Scircle =  Lcircle*Lcircle/(4*Pi);
    std::cout << "Area of a circle = " << Scircle << std::endl;
    return 0;
}
