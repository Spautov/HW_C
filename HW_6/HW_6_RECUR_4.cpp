#include <iostream>

template <typename T1, typename T2> double exp(T1 nub, T2 ex);

int main()
{
    std::cout<< "Enter the number:  ";
    int n;
    std::cin >> n;
    std::cout<< "Enter the  extent:  ";
    int k;
    std::cin >> k;
    std::cout << exp(n,k) << std::endl;
    return 0;
}

template <typename T1, typename T2> double exp(T1 num, T2 ex)
{

    if (ex ==1)
    {
        return num;
    };
    if (ex == 0)
    {
        return 1;
    };
    if (ex < 0)
    {
        ex *= (-1);
        return 1/static_cast<double>(exp(num,ex-1)*num);
    };
    return exp(num, ex-1)*num;
}
