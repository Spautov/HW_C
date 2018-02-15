#include <iostream>

int main()
{
    float S;
    int v = 61;
    int t = 3;
    int a = 3;

    S = v*t + (a*t*t)/2.0f;

    std::cout << "Length =  " << S << std::endl;
    return 0;
}
