#include "nextdate.h"

std::string changeDate(int year, int month, int day)
{
    return std::to_string(year) + "/" + std::to_string(month) + "/" + std::to_string(day);
}

std::string nextDate(int year, int month, int day)
{
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(year < 0 || month > 12 || month < 1 || day < 0 || day > 31)
        return "Invalid";
    if(month == 12 && day == 31) 
        return changeDate(year+1, 1, 1);
    else if(year % 4 == 0) 
        days[2] += 1;
    if(day > days[month])
        return "Invalid";
    else if(day == days[month]) {
        month += 1; day = 0;
    }
    return changeDate(year, month, day+1);
}