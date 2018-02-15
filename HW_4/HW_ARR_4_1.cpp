#include <iostream>

int main()
{
    const int n = 3;
    const int k = 4;
    int MyArr[n][k];
    std::cout << "Enter first element of array: ";
    std::cin >> MyArr[0][0];

    for (int i = 0; i< n; ++i)
    {
        for (int j = 0; j < k; ++j)
        {
            if ((i ==0 && j!=0) || (i !=0 && j!=0))
            {
                MyArr[i][j] = MyArr[i][j-1] *2;
            };
            if (i !=0 && j==0)
            {
                MyArr[i][j] = MyArr[i-1][k-1] *2;
            };
            std::cout<< MyArr[i][j]<< " ";
        };
        std::cout<<std::endl;
    }

    return 0;
}
