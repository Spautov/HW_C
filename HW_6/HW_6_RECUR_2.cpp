#include <iostream>
#include <stdlib.h>
#include <time.h>

int answert = 0;
int ans[4];
int bull = 0;
int cow = 0;
int attempt = 0;
int secret[4];
int init(int arr[]);
bool valid(int num[]);
void reply();
void compare(int secr[], int answ[]);

int main()
{
    srand(time(0));
    init(secret);
    reply();
    compare(secret,ans);
    return 0;
}

int init(int arr[])
{
    arr[1] = rand() % 10;
    do
    {
        arr[2] = (rand() % 10);
    }
    while (arr[2] == arr[1]);
    do
    {
        arr[3] = (rand() % 10);
    }
    while ((arr[3] == arr[1]) || (arr[3] == arr[1]) );
    do
    {
        arr[4] = (rand() % 10);
    }
    while ((arr[4] == arr[1]) || (arr[4] == arr[1]) || (arr[4] == arr[3]));
}

bool valid(int num[])
{
    bool a1, a2, a3;
    a1 = (num[0]!= num[1]) &&  (num[0]!= num[2]) && (num[0]!= num[3]);
    a2 = (num[1]!= num[2]) && (num[1]!= num[3]);
    a3 = (num[2]!= num[3]);

    if (a1 && a2 && a3)
    {
        return false;
    }
    else
    {
        std::cout << "incorrect number" << std::endl;
        return true;
    }
}
void reply()
{
    do
    {
        std::cout << "enter number: ";
        std::cin >> answert;
        ans[3] = answert %10;
        ans[2] = (answert/10)%10;
        ans[1] = (answert/100)%10;
        ans[0] = (answert/1000);
        ++attempt;
    }
    while (valid(ans));
}

void compare(int secr[], int answ[])
{
    bull = 0;
    cow = 0;
    for (int i = 0; i<4 ; ++i)
    {
        if (secr[i] == answ[i])
        {
            ++cow;
        };
        for (int j=0; j<4; ++j)
        {
            if (answ[i] == secr[j] && i!=j)
            {
                ++bull;
            }
        }
    };
    if (cow == 4)
    {
        std::cout << "You have won from the " <<attempt << "-rd attempt " << std::endl;
        return;
    }
    else
    {
        std::cout << "You have:" << std::endl;
        std::cout << bull <<" - bulls" << std::endl;
        std::cout << cow <<" - cows" << std::endl;
        reply();
        compare(secret,ans);
    };
}
