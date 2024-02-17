#include <stdio.h>
int main()
{
    int daysinp;
    printf("input the number of days:");
    scanf("%d", &daysinp);
    int years = daysinp / 365;
    int rdays = daysinp % 365;
    int week = rdays / 7;
    int days = rdays % 7;
    printf("Years:%d\nWeeks:%d\nDays:%d", years, week, days);
    return (0);
}
