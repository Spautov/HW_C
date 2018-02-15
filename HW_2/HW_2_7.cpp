#include <iostream>

int main()
{
    int firstborder;
    int secondborder;
    int c;

    std::cout<< "Enter the first border of range: ";
    std::cin>> firstborder;
    std::cout<< "Enter the second border of range: ";
    std::cin>> secondborder;

    if (firstborder>secondborder)
    {
        c = firstborder;
        firstborder = secondborder;
        secondborder = c;
    }
    std::cout << "All numbers of range are: ";
    for (int i =firstborder; i<= secondborder; i++)
    {
        std::cout << i << " ";
    }
    std::cout <<std::endl;

    std::cout << "All even numbers of range are: ";
    for (int i =firstborder; i<= secondborder; i++)
    {
        if (i%2 ==0)
            std::cout << i << " ";
    }
    std::cout <<std::endl;

    std::cout << "All odd numbers of range are: ";
    for (int i =firstborder; i<= secondborder; i++)
    {
        if (i%2 !=0)
            std::cout << i << " ";
    }
    std::cout <<std::endl;

    std::cout << "All numbers of range multiple 7 are: ";
    for (int i =firstborder; i<= secondborder; i++)
    {
        if (i%7 ==0)
            std::cout << i << " ";
    }
    std::cout <<std::endl;

    return 0;
}
