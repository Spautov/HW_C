#include <iostream>

int main()
{
    std::cout << "Enter number: ";
    unsigned int num;
    std::cin >> num;

    if (num == 0)
    {
        std::cout << num << std::endl;
        std::cout << "The number is unhappy" << std::endl;
    }
    else
    {
        int quantity = 0;
        int helpnum = num;
        while (helpnum !=0)
        {
            helpnum /=10;
            quantity++;
        }

        int Num[quantity];
        helpnum = num;

        for (int i = (quantity-1); i>=0; i--)
        {
            Num[i] = helpnum % 10;
            helpnum /= 10;
        }

        for (int i = 0; i<quantity; i++)
        {
            std::cout << Num[i];
        }
        std::cout << std::endl;

        int sumbegin = 0;
        int sumend = 0;

        if ((quantity % 2) == 0)
        {
            for (int i = 0; i<quantity/2; i++)
                sumbegin+=Num[i];
            for (int i = quantity/2; i<quantity; i++)
                sumend += Num[i];
        }
        else
        {
            for (int i = 0; i<quantity/2; i++)
                sumbegin+=Num[i];
            for (int i = (quantity/2)+1; i<quantity; i++)
                sumend+=Num[i];
        };
        if ((sumbegin == sumend)&&(sumbegin!=0))
        {
            std::cout << "The number is happy" << std::endl;
        }
        else
        {
            std::cout << "The number is unhappy" << std::endl;
        };
    }

    return 0;
}
