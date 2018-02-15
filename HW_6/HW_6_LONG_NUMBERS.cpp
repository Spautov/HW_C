#include <iostream>
#include <string.h>
#include <stdlib.h>


void convert(char *str, int* num);
void turn_arr(int *arr, int len);


int main()
{
    char *strA = new char[10000];
    char *strB = new char[10000];
    std::cout << "Enter number A:  " << std::endl;
    std::cin >> strA;
    std::cout << "Enter number B:  " << std::endl;
    std::cin >> strB;
    int lenA = strlen(strA);
    int lenB = strlen(strB);
    int LenSum = ((lenA-lenB) >= 0) ? (lenA+1) : (lenB+1);
    int *numbrA = new int[lenA];
    int *numbrB = new int[lenB];
    int *numbSum = new int[LenSum];
    convert(strA, numbrA);
    convert(strB, numbrB);
    turn_arr(numbrA,lenA);
    turn_arr(numbrB,lenB);

    for (int i = 0; i<LenSum; ++i)
    {
        numbSum[i] = 0;
    };
    int s = 0;
    if (lenA >= lenB)
    {
        for (int i = 0; i<lenA; ++i)
        {
            if (i<lenB)
            {
                s = numbrA[i] + numbrB[i];
                if (s >= 10)
                {
                    *(numbSum+i) += s % 10;
                    *(numbSum+i+1) += s /10;
                }
                else
                {
                    *(numbSum+i) += s;
                }
            }
            else if (i<lenA)
            {
                s = numbrA[i] + *(numbSum+i);
                if (s >= 10)
                {
                    *(numbSum+i) = s % 10;
                    *(numbSum+i+1) += s /10;
                }
                else
                {
                    *(numbSum+i) = s;
                }

            }
        }
    }
    else
    {
        for (int i = 0; i<lenB; ++i)
        {
            if (i<lenA)
            {
                s = numbrB[i] + numbrA[i];
                if (s >= 10)
                {
                    *(numbSum+i) += s % 10;
                    *(numbSum+i+1) += s /10;
                }
                else
                {
                    *(numbSum+i) += s;
                }
            }
            else if (i<lenB)
            {
                s = numbrB[i] + *(numbSum+i);
                if (s >= 10)
                {
                    *(numbSum+i) = s % 10;
                    *(numbSum+i+1) += s /10;
                }
                else
                {
                    *(numbSum+i) = s;
                }

            }
        }
    }

    turn_arr(numbSum,LenSum);
    std::cout << "Sum A and B is:  " << std::endl;

    for (int i = 0; i<LenSum; ++i)
    {
        if ((i == 0)&& *(numbSum+i)!=0 )
        {
            std::cout <<  *(numbSum+i);
        };
        if (i != 0)
        {
            std::cout <<  *(numbSum+i);
        }
    };
    std::cout << std::endl;




    return 0;
}

void convert(char *str, int *num)
{
    for (int i = 0; i<strlen(str); ++i)
    {
        *(num+i) = (*(str+i) - 48);
    };
}

void turn_arr(int *arr, int len)
{
    int temp = 0;
    for (int i = 0; i<len/2; ++i)
    {
        temp = arr[i];
        arr[i] = arr[len-1-i];
        arr[len-1-i] = temp;
    }
}




