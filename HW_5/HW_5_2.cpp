#include <iostream>

unsigned int fib(int n);
void output(int vari);
int enter();
char ask();

int main()
{
    char answer;
    do
    {
        int number = enter();
        output(number);
        answer = ask();
    }
    while (answer != 'n');
}

unsigned int fib(int n)
{
    if (n==0)
    {
        return 0;
    };
    if (n==1)
    {
        return 1;
    };
    return fib(n-1)+fib(n-2);
}

void output(int vari)
{
    std::cout <<  "The number of Fibonachi F" << vari<<" = " <<fib(vari) <<std::endl;
}

int enter()
{
    int num = 0;
    std::cout << "Enter number from 0 to 47"<< std::endl;
    std:: cin>>  num;
    return num;
}

char ask()
{
    char ans;
    std::cout << "Do you wish to continue? Yes / No - y/n: ";
    std::cin >> ans;
    std::cout << std::endl;
    return ans;
}
