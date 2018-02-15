#include <iostream>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>

const int len_str = 91;
bool if_start_number(char *str, const int serial);
void del_char(char *str, const char pop);
int found_end(const char *str);
void str_up(char *str);
void str_push_arr(int lit[45][32],const char *str, const int num);


int main()
{
    SetConsoleCP(1251); // for Code::Blocks
    SetConsoleOutputCP(1251); // for Code::Blocks
    //setlocale(LC_ALL, "Russian"); //for Visual Studio
    FILE *file;
    file = fopen("presidents.txt", "r");
    char *strin;
    char *strin_tmp;
    char *string_work;
    int liters[45][32] = {};
    char presidens_names[45][25];
    int siz;
    strin = new char[len_str];
    string_work = new char[len_str];
    if (file)
    {
        std::cout<<"Файл был открыт\n";
    };
    int count_lins = 1;
    while (fgets(strin, len_str, file))
    {
        if (if_start_number(strin, count_lins))
        {
            del_char(strin, '\t');
            del_char(strin, '\n');
            if (strstr(strin, ".jpg"))
            {
                strin_tmp = strstr(strin, ".jpg")+ strlen(".jpg")+1;
            }
            else if (strstr(strin, ".jpeg"))
            {
                strin_tmp = strstr(strin, ".jpeg")+ strlen(".jpeg")+1;
            }
            else if (strstr(strin, ".gif"))
            {
                strin_tmp = strstr(strin, ".gif")+ strlen(".gif")+1;
            }
            else if (strstr(strin, ".png"))
            {
                strin_tmp = strstr(strin, ".png")+ strlen(".png")+1;
            }
            else if (strstr(strin, ".tif"))
            {
                strin_tmp = strstr(strin, ".tif")+ strlen(".tif")+1;
            };

            strcpy(string_work,strin_tmp);
            string_work[found_end(string_work)] = '\0';
            str_up(string_work);
            std::cout <<count_lins<<" - " <<string_work << std::endl;
            strcpy(presidens_names[count_lins],string_work);
            str_push_arr(liters, string_work, count_lins-1);
            ++count_lins;
        }
    }

    fclose(file);
    delete[] strin;
    delete[] string_work;
    return 0;
}

bool if_start_number(char *str, const int serial)
{
    char one;
    char then;
    int number;
    if (serial < 10)
    {
        one = str[0];
        number = (one - 48);
    }
    else
    {
        one = str[1];
        then = str[0];
        number = (one - 48) + (then - 48) * 10;
    }

    if (number == serial)
    {
        return true;
    }
    return false;
}


void del_char(char *str, const char pop)
{
    char str_tmp[len_str] = "";
    char str_help[2] = "";

    for (int i = 0; i < strlen(str); ++i)
    {
        if (str[i] != pop)
        {
            str_help[0] = str[i];
            strcat(str_tmp, str_help) ;
        }
    }
    strcpy(str,str_tmp);
}

int found_end(const char *str)
{
    int cont;
    for (cont= 0; cont<strlen(str); ++cont)
    {
        if (!(str[cont] >= -64 && str[cont] <= -1) && (str[cont]!= ' '))
        {
            return cont;
        }
    };
    return cont+1;
}

void str_up(char *str)
{
    for (int i = 0; i<strlen(str); ++i)
    {
        if (str[i]>=-32 && str[i]<= -1)
        {
            str[i] -= 32;
        }
    }
}

void str_push_arr(int lit[45][32],const char *str, const int num)
{
    for (int i = 0; i < strlen(str); ++i)
    {
        if (str[i] != ' ')
        {
            ++lit[num][str[i]+64];
        }
    }
}
