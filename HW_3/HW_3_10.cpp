#include <iostream>

int cell(int siz, bool view)
{
    char mark;
    for (int i=0; i<siz; ++i)
    {
        for (int j=0; j<8; ++j)
        {
            if (view)
            {
                mark = '*';
            }
            else
            {
                mark = '-';
            }
            for (int k=0; k<siz; ++k)
            {
                std::cout <<mark;
            };
            view = !view;
        }
        std::cout <<std::endl;
    }
    return 0;
};

int main()
{
    int sizecell;
    char ask;
    do
    {
        std::cout << "Set the cell size: ";
        std::cin >> sizecell;
        cell(sizecell,true);
        cell(sizecell,false);
        cell(sizecell,true);
        cell(sizecell,false);
        std::cout << "Would you like to continue (y / n): ";
        std::cin >> ask;
        std::cout<<std::endl;
    }
    while (ask != 'n');
    return 0;
}
