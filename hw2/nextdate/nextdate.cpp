#include "nextdate.h"

std::string nextDate(int year, int month, int day)
{
    int tomorrowDay = day, 
        tomorrowMonth = month,
        tomorrowYear = year;


    if(year < 0 || month > 12 || month < 1 || day < 0 || day > 31)
        return "Invalid";
    else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month ==10) {
        if(day < 31)
            tomorrowDay = day + 1;
        else {
            tomorrowDay = 1;
            tomorrowMonth = month +1;
        }
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11) {
        if(day < 30)
            tomorrowDay = day + 1;
        else if(day > 30)
            return "Invalid";
        else {
            tomorrowDay = 1;
            tomorrowMonth = month + 1;
        }
    }
    else if(month == 12) {
        if(day < 31)
            tomorrowDay = day + 1;
        else {
            tomorrowDay = 1;
            tomorrowMonth = 1;
            tomorrowYear = year +1;
        }
    }
    else if(month == 2) {
        if(day < 28)
            tomorrowDay = day + 1;
        else if(day == 28) {
            // leap year
            if(year % 4 == 0)
                tomorrowDay = 29;
            else {
                tomorrowDay = 1;
                tomorrowMonth = 3;
            }
        }
        else if(day == 29) {
            // leap year
            if(year % 4 == 0) {
                tomorrowDay = 1;
                tomorrowMonth = 3;
            }
            else 
                return "Invalid";
        }
        else 
            return "Invalid";
    }
    return std::to_string(tomorrowYear) + "/" + std::to_string(tomorrowMonth) + "/" + std::to_string(tomorrowDay);
}