#include <iostream>

bool bis_sextus(int year);
int sum_day(int day, int mon, int year);
int day_period(int day1, int month1, int year1, int day2, int month2, int year2);

int main()
{
    int day1;
    int month1;
    int year1;
    int day2;
    int month2;
    int year2;
    std::cout << "Enter first date (dd mm yyyy): ";
    std::cin >>  day1 >> month1 >> year1;
    std::cout << "Enter second date (dd mm yyyy): ";
    std::cin >>  day2 >> month2 >> year2;
    std::cout << "The period is " << day_period(day1, month1, year1, day2, month2, year2) << " days " <<std::endl;
    return 0;
}

bool bis_sextus(int year)
{
    if ((year%4 ==0) && (year%100 != 0) || (year%400 ==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int sum_day(int day, int mon, int year)
{
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int count_day = day;
    if ((mon == 2) && bis_sextus(year))
    {
        count_day += 29;
    }
    else
    {
        count_day += month[mon-1];
    };
    for (int i = 1900; i < year; ++i)
    {
        if (bis_sextus(i))
        {
            count_day += 366;
        }
        else
        {
            count_day += 365;
        }
    };
    return count_day;
}

int day_period(int day1, int month1, int year1, int day2, int month2, int year2)
{
    return  (sum_day(day2, month2, year2) - sum_day(day1, month1, year1));
}
