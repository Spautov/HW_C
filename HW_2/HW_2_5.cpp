#include <iostream>
#include <iomanip>

int main()
{
    int i;
    int j;
    for (i=1; i<10; i++)
    {
        for (j=1; j<10; j++)
        {
            std::cout<<std::setw(1)<< i<<std::setw(1)<<"x"<<std::setw(1)<<j
                     <<std::setw(1)<<"=" <<std::setw(2)<< i*j <<"  ";
        }
        std::cout<<std::endl;
    }
    return 0;
}
