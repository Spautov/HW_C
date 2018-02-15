#include <iostream>

unsigned int fuctor(int n);
void print(int vari);
int enter();
char ask();

int main()
{
    char answer;
    do
    {
        int number = enter();
        print(number);
        answer = ask();
    }
    while (answer != 'n');
}

unsigned int fuctor(int n)
{
    if (n==0 || n == 1)
    {
        return 1;
    };
    return n*fuctor(n-1);
}

void print(int vari)
{
    std::cout << vari<< "! = "<<fuctor(vari) << std::endl;
}

int enter()
{
    int num = 0;
    std::cout << "Enter number from 0 to 20"<< std::endl;
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
