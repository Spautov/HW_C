#include <iostream>

int main()
{
    int Hst;
    int Hend;
    int Mst;
    int Mend;
    int Sst;
    int Send;
    int Tst;
    int Tend;
    float Cash;
    std::cout << "Enter time of the beginning of a conversation H M S: " << std::endl;
    std::cin >> Hst >> Mst >> Sst;
    std::cout << "Enter time of the end of a conversation H M S: " << std::endl;
    std::cin >> Hend >> Mend >> Send;
    Tst = Hst*3600 + Mst*60 + Sst;
    Tend = Hend*3600 + Mend*60 + Send;
    Cash = ((Tend - Tst)/(float)60)*30;
    std::cout << "The cost of your conversation is " << Cash << " kopeks"  << std::endl;
    return 0;
}
