#include <iostream>

int sum(int a, int b);

int main()
{
    int start =0;
    int end_ = 0;
    std::cout << "Enter start range border: ";
    std::cin >> start;
    std::cout << "Enter end range border: ";
    std::cin >> end_;
    int temp = 0;
    if (start>end_)
    {
        temp = start;
        start = end_;
        end_ = temp;
    };
    std::cout << "Sum from " << start << " to " << end_ << " is: " << sum(start, end_) <<std::endl;
    return 0;
}

int sum(int a, int b)
{
    if (a==b)
    {
        return a;
    } else
    {
        return b+sum(a, b-1);
    };
 }
