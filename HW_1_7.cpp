#include <iostream>

int main()
{
    int Length;
    float Time;
    float Sped;
    std::cout << "Enter distance to the airport (km): ";
    std::cin >> Length;
    std::cout << "Enter time into ways (h): ";
    std::cin >> Time;
    Sped = Length / Time;

    std::cout << "Your speed has to be  " << Sped << " km/h " << std::endl;
    return 0;
}
