#include <iostream>

int main()
{
    unsigned int number;
    unsigned int sum = 0;
    unsigned int num;
    std::cout << "Enter the number A: ";
    std::cin >> number;
    num = number;
    sum = 0;
    while (number > 0)
    {
        sum += number%10;
        number /=10;
    };
    if (sum*sum*sum == num*num)
    {
        std::cout << num <<" The cube of the amount " << sum*sum*sum <<  " is equal A*A " << num*num << std::endl;
    }
    else
    {
        std::cout << num <<" The cube of the amount " << sum*sum*sum <<  " is not equal A*A " << num*num << std::endl;
    }
    return 0;
}
