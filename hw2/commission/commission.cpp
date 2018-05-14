#include "commission.h"

double commission(int locks, int stocks, int barrels)
{
    double sales;

    sales = locks*45 + stocks*30 + barrels*25;
    if(sales>1800) 
        return 1000 * 0.1 + 800 * 0.15 + (sales - 1800) * 0.2;
    else if(sales > 1000) 
        return 1000 * 0.1 + (sales - 1000) * 0.15;
    else 
        return sales*0.1;

}