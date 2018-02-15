#include <iostream>

int figureA()
{
    for (int i = 1; i<=12; ++i )
    {
        for (int j = 1; j <=i; ++j)
        {
            std::cout << '*';
        }
        std::cout << std::endl;
    };
    std::cout << std::endl;
    return 0;
};

int figureB()
{
    for (int i = 1; i<=12; ++i )
    {
        for (int j = 1; j <i; ++j)
        {
            std::cout << ' ';
        }
        for (int j = 1; j <=(13-i); ++j)
        {
            std::cout << '*';
        }
        std::cout << std::endl;
    };
    std::cout << std::endl;
    return 0;
};

int figureC()
{
    for (int i = 1; i<=12; ++i )
    {
        for (int j = 1; j <=12; ++j)
        {
            if (j<=i || j>=(13-i))
            {
                std::cout << '*';
            }
            else
            {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    };
    std::cout << std::endl;
    return 0;
};

int figureD()
{
    for (int i = 1; i<=12; ++i )
    {
        for (int j = 1; j <=12; ++j)
        {
            if (j<=(13-i) || j>=i)
            {
                std::cout << '*';
            }
            else
            {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    };
    std::cout << std::endl;
    return 0;
};

int figureE()
{
    for (int i = 1; i<=12; ++i )
    {
        if (i<=6)
        {
            for (int j = 1; j <=12; ++j)
            {
                if (j<=i || j>=(13-i))
                {
                    std::cout << '*';
                }
                else
                {
                    std::cout << ' ';
                }
            }
        }
        else
        {
            for (int j = 1; j <=12; ++j)
            {
                if (j<=(13-i) || j>=i)
                {
                    std::cout << '*';
                }
                else
                {
                    std::cout << ' ';
                }
            }
        }
        std::cout << std::endl;
    };
    std::cout << std::endl;
    return 0;
};

int figureF()
{
    for (int i = 1; i<=12; ++i )
    {
        if (i<=6)
        {
            for (int j = 1; j<=(i-1); ++j)
            {
                std::cout << ' ';
            };
            for (int j = i; j <=(13-i); ++j)
            {
                std::cout << '*';
            }
        }
        else
        {
            for (int j = 1; j<=12-i; ++j)
            {
                std::cout << ' ';
            };
            for (int j = 12-i; j<i; ++j)
            {
                std::cout << '*';
            }
        }
        std::cout << std::endl;
    };
    std::cout << std::endl;
    return 0;
};

int figureG()
{
    for (int i = 1; i<=12; ++i )
    {
        if (i<=6)
        {
            for (int j = 1; j <i; ++j)
            {
                std::cout << ' ';
            }
            for (int j = 1; j <=(13-i); ++j)
            {
                std::cout << '*';
            }
        }
        else
        {
            for (int j = 1; j <13; ++j)
            {
                if (j <(13-i))
                {
                    std::cout << ' ';
                }
                else
                {
                    std::cout << '*';
                }
            }
        }
        std::cout << std::endl;
    };
    std::cout << std::endl;
    return 0;
};

int figureH()
{
    for (int i = 1; i<=12; ++i )
    {
        if (i<=6)
        {
            for (int j = 1; j <=(13-i); ++j)
            {
                std::cout << '*';
            }
        }
        else
        {
            for (int j = 1; j <=i; ++j)
            {
                std::cout << '*';
            }
        }
        std::cout << std::endl;
    };
    std::cout << std::endl;
    return 0;
};

int figureJ()
{
    for (int i = 1; i<=12; ++i )
    {
        for (int j = 1; j <13; ++j)
        {
            if (j <(13-i))
            {
                std::cout << ' ';
            }
            else
            {
                std::cout << '*';
            }
        }
        std::cout << std::endl;
    };
    std::cout << std::endl;
    return 0;
};

int figureK()
{
    for (int i = 1; i<=12; ++i )
    {
        for (int j = 1; j <=(13-i); ++j)
        {
            std::cout << '*';
        }
        std::cout << std::endl;
    };
    std::cout << std::endl;
    return 0;
};


int main()
{
    char select;
    std::cout << "For an output of a figure enter: " << std::endl;
    std::cout << " - a - figure A " << std::endl;
    std::cout << " - b - figure B " << std::endl;
    std::cout << " - c - figure C " << std::endl;
    std::cout << " - d - figure D " << std::endl;
    std::cout << " - e - figure E " << std::endl;
    std::cout << " - f - figure F " << std::endl;
    std::cout << " - g - figure G " << std::endl;
    std::cout << " - h - figure H " << std::endl;
    std::cout << " - j - figure J " << std::endl;
    std::cout << " - k - figure K " << std::endl;
    std::cout << " - 0 - exit " << std::endl;

    do
    {
        std::cout << "Your choice is: ";
        std::cin >> select;
        switch (select)
        {
        case 'a':
        {
            figureA();
            break;
        }
        case 'b':
        {
            figureB();
            break;
        }
        case 'c':
        {
            figureC();
            break;
        }
        case 'd':
        {
            figureD();
            break;
        }
        case 'e':
        {
            figureE();
            break;
        }
        case 'f':
        {
            figureF();
            break;
        }
        case 'g':
        {
            figureG();
            break;
        }
        case 'h':
        {
            figureH();
            break;
        }
        case 'j':
        {
            figureJ();
            break;
        }
        case 'k':
        {
            figureK();
            break;
        }
        }
    }
    while (select !='0');
    return 0;
}
