#include <iostream>

using namespace std;

int main()
{
    int firstborder;
    int secondborder;
    int sum;


    std::cout<< "Enter the first border of range: ";
    std::cin>> firstborder;
    std::cout<< "Enter the second border of range: ";
    std::cin>> secondborder;

    if (firstborder>secondborder)
    {
        sum = firstborder;
        firstborder = secondborder;
        secondborder = sum;
    }

    sum = 0;

    for (int i =firstborder; i<= secondborder; i++)
        sum+=i;
    std::cout << "The sum from " << firstborder <<" to " << secondborder << " is " << sum << std::endl;

    return 0;
}
