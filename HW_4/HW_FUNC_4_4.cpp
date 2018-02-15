#include <iostream>

void top();
void  bottom();
void diamond();
void heat();
void spade();
void club();
void num_6();
void num_7();
void num_8();
void num_9();
void num_10();
void jack();
void queen();
void king();
void ace();
void select_card(char name, char suit);

int main()
{
    char name_card;
    char suit_card;
    std::cout<< "Select name of card: "<< std::endl;
    std::cout<< "- 6 - six "<< std::endl;
    std::cout<< "- 7 - seven "<< std::endl;
    std::cout<< "- 8 - eight "<< std::endl;
    std::cout<< "- 9 - nine "<< std::endl;
    std::cout<< "- 0 - ten "<< std::endl;
    std::cout<< "- j - jack "<< std::endl;
    std::cout<< "- q - queen "<< std::endl;
    std::cout<< "- k - king "<< std::endl;
    std::cout<< "- a - ace "<< std::endl;
    std::cin >>name_card;
    std::cout << std::endl;
    std::cout<< "Select suit of card: "<< std::endl;
    std::cout<< "- h - heat "<< std::endl;
    std::cout<< "- d - diamond "<< std::endl;
    std::cout<< "- c - club "<< std::endl;
    std::cout<< "- s - spade "<< std::endl;
    std::cin >>suit_card;
    std::cout << std::endl;
    select_card(name_card, suit_card);
    return 0;
}

void select_card(char name, char suit)
{
    top();
    switch(name)
    {
    case '6':
    {
        num_6();
        break;
    }
    case '7':
    {
        num_7();
        break;
    }
    case '8':
    {
        num_8();
        break;
    }
    case '9':
    {
        num_9();
        break;
    }
    case '0':
    {
        num_10();
        break;
    }
    case 'j':
    {
        jack();
        break;
    }
    case 'q':
    {
        queen();
        break;
    }
    case 'k':
    {
        king();
        break;
    }
    case 'a':
    {
        ace();
        break;
    }
    };

    switch (suit)
    {
    case 'h':
    {
        heat();
        break;
    }
    case 'd':
    {
        diamond();
        break;
    }
    case 'c':
    {
        club();
        break;
    }
    case 's':
    {
        spade();
        break;
    }
    };
    bottom();
}

void top()
{
    std::cout<< "  00000000000000000000000 " <<std::endl
             << " 0000000000000000000000000" << std::endl;
}

void  bottom()
{
    std::cout<< " 0000000000000000000000000" <<std::endl
             << "  00000000000000000000000 " << std::endl;
}

void diamond()
{
    std::cout <<"00                       00" << std::endl
              <<"00           0           00"<< std::endl
              <<"00          000          00"<< std::endl
              <<"00         00000         00"<< std::endl
              <<"00        0000000        00"<< std::endl
              <<"00         00000         00"<< std::endl
              <<"00          000          00"<< std::endl
              <<"00           0           00"<< std::endl
              <<"00                       00"<< std::endl;
}

void heat()
{
    std::cout <<"00                       00"<< std::endl
              <<"00        00   00        00"<< std::endl
              <<"00       0000 0000       00"<< std::endl
              <<"00        0000000        00"<< std::endl
              <<"00         00000         00"<< std::endl
              <<"00          000          00"<< std::endl
              <<"00           0           00"<< std::endl
              <<"00                       00"<< std::endl;
}
void spade()
{
    std::cout <<"00                       00"<< std::endl
              <<"00           0           00"<< std::endl
              <<"00          000          00"<< std::endl
              <<"00         00000         00"<< std::endl
              <<"00        0000000        00"<< std::endl
              <<"00       0000 0000       00"<< std::endl
              <<"00        00 0 00        00"<< std::endl
              <<"00          000          00"<< std::endl
              <<"00                       00"<< std::endl;

}
void club()
{
    std::cout <<"00                       00"<< std::endl
              <<"00           0           00"<< std::endl
              <<"00          000          00"<< std::endl
              <<"00        0  0  0        00"<< std::endl
              <<"00       000000000       00"<< std::endl
              <<"00        0  0  0        00"<< std::endl
              <<"00           0           00"<< std::endl
              <<"00          000          00"<< std::endl
              <<"00                       00"<< std::endl;

}

void num_6()
{
    std::cout <<"00                       00"<< std::endl
              <<"00      00               00"<< std::endl
              <<"00     0                 00"<< std::endl
              <<"00     000               00"<< std::endl
              <<"00     0  0              00"<< std::endl
              <<"00     0  0              00"<< std::endl
              <<"00      00               00"<< std::endl
              <<"00                       00"<< std::endl;

}

void num_7()
{
    std::cout <<"00                       00"<< std::endl
              <<"00     0000              00"<< std::endl
              <<"00        0              00"<< std::endl
              <<"00        0              00"<< std::endl
              <<"00       0               00"<< std::endl
              <<"00       0               00"<< std::endl
              <<"00       0               00"<< std::endl
              <<"00                       00"<< std::endl;
}

void num_8()
{
    std::cout <<"00                       00"<< std::endl
              <<"00      00               00"<< std::endl
              <<"00     0  0              00"<< std::endl
              <<"00      00               00"<< std::endl
              <<"00     0  0              00"<< std::endl
              <<"00     0  0              00"<< std::endl
              <<"00      00               00"<< std::endl
              <<"00                       00"<< std::endl;
}

void num_9()
{
    std::cout <<"00                       00"<< std::endl
              <<"00      00               00"<< std::endl
              <<"00     0  0              00"<< std::endl
              <<"00     0  0              00"<< std::endl
              <<"00      000              00"<< std::endl
              <<"00        0              00"<< std::endl
              <<"00      00               00"<< std::endl
              <<"00                       00"<< std::endl;
}

void num_10()
{
    std::cout <<"00                       00"<< std::endl
              <<"00       0   00          00"<< std::endl
              <<"00      00  0  0         00"<< std::endl
              <<"00     0 0  0  0         00"<< std::endl
              <<"00       0  0  0         00"<< std::endl
              <<"00       0  0  0         00"<< std::endl
              <<"00       0   00          00"<< std::endl
              <<"00                       00"<< std::endl;
}

void jack()
{
    std::cout <<"00                       00"<< std::endl
              <<"00     000               00"<< std::endl
              <<"00     0  0              00"<< std::endl
              <<"00     000               00"<< std::endl
              <<"00     0  0              00"<< std::endl
              <<"00     0  0              00"<< std::endl
              <<"00     000               00"<< std::endl
              <<"00                       00"<< std::endl;
}

void queen()
{
    std::cout <<"00                       00"<< std::endl
              <<"00     0000              00"<< std::endl
              <<"00     0  0              00"<< std::endl
              <<"00     0  0              00"<< std::endl
              <<"00     0  0              00"<< std::endl
              <<"00    000000             00"<< std::endl
              <<"00    0    0             00"<< std::endl
              <<"00                       00"<< std::endl;
}
void king()
{
    std::cout <<"00                       00"<< std::endl
              <<"00     0  0              00"<< std::endl
              <<"00     0 0               00"<< std::endl
              <<"00     00                00"<< std::endl
              <<"00     0 0               00"<< std::endl
              <<"00     0  0              00"<< std::endl
              <<"00     0   0             00"<< std::endl
              <<"00                       00"<< std::endl;
}
void ace()
{
    std::cout <<"00                       00"<< std::endl
              <<"00     00000             00"<< std::endl
              <<"00     0 0 0             00"<< std::endl
              <<"00       0               00"<< std::endl
              <<"00       0               00"<< std::endl
              <<"00       0               00"<< std::endl
              <<"00       0               00"<< std::endl
              <<"00                       00"<< std::endl;
}
