#include <stdio.h>
int main()
{
    int daysi;
    printf("input the number of days:");
    scanf("%d", &daysi);
    int years = daysi / 365;
    int months = (daysi % 365) / 30;
    int weeks = (daysi - ((years * 365) + (months * 30))) / 7;
    int days = (daysi - ((years * 365) + (months * 30) + (weeks * 7)));
    printf("Years: %d\nMonths: %d \nWeeks: %d \nDays: %d", years, months, weeks, days);
    return (0);
}
