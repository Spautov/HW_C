#include <iostream>

int sum(int start, int finish);


int main()
{
    int first_num;
    int second_num;
    std::cout << "Enter the beginning of range: ";
    std::cin >> first_num;
    std::cout << "Enter the end of range: ";
    std::cin >> second_num;
    std::cout << "Sum of numbers from " << first_num << " to " << second_num << " is "
    << sum(first_num,second_num)<< std::endl;
    return 0;
}

int sum(int start, int finish)
{
    int res = 0;
    for (int i = start; i <= finish; ++i)
    {
        res += i;
    };
    return res;

}
