#include <iostream>

void happy_num(int num);

int main()
{
    int numbr;
    do
    {
    std::cout << "Enter the 6th-place number: ";
    std::cin >> numbr;
    }
    while(numbr<100000 || numbr> 999999 );
    happy_num(numbr);
    return 0;
}

void happy_num(int num)
{
    int sum_left = 0;
    int sum_right = 0;
    for (int i = 0; i<6; ++i)
    {
        if (i<3)
        {
            sum_right += num%10;
        }
        else
        {
            sum_left += num%10;
        }
        num /=10;
    };
    if (sum_right == sum_left)
    {
        std::cout << "The number is happy " << std::endl;
    }
    else
    {
        std::cout << "The number is unhappy " << std::endl;
    }
}
