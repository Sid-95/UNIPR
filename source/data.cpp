/********************************************//**
 *  Author: Siddique Asdullah
 *  desc: checks if the inserted date is correct
 ***********************************************/


#include <iostream>

bool isLeapYear(int y); //a Year to check
bool checkDate(int d, int m, int y); //d day to check, m month to check, y year to check

int main()
{
    int d, m, y;

    std::cout << "Immetti la data: ";
    if(std::cin >> d >> m >> y)
    {
         if(checkDate(d, m, y))
            std::cout << "Data corretta";
        else
            std::cout << "Data errata";
    }
    else
    {
        std::cout << "Formato input non corretto";
    }

    std::cout << std::endl;
    return 0;
}

bool isLeapYear(int y)
{
    return ((y % 4 == 0) || ((y % 100 == 0) && (y % 400 == 0)));
}

bool checkDate(int d, int m, int y)
{
    if( y < 1582) //Start point of gregorian calendar
        return false;
    else if((m < 1) || (m > 12))
        return false;
    else if(( d < 1) || (d > 31))
        return false;

    int maxDays[12] = {31, isLeapYear(y) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(d <= maxDays[m-1])
        return true;

    return false;
}
