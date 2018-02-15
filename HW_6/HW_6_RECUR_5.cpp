#include <iostream>

void star_print(int n);

int main()
{
    int num;
    std::cout << "Enter count stars: ";
    std::cin >> num;
    star_print(num);
    return 0;
}

void star_print(int n)
{
    if (n ==1)
    {
        std::cout<< "*";
    }
    else if (n>1)
    {
        --n;
        std::cout<< "*";
        star_print(n);
    };
    return;
}
