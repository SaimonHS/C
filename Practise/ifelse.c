#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter the value of x:");
    scanf("%d", &x);
    printf("Enter the value of y:");
    scanf("%d", &y);
    printf("Enter the value of z:");
    scanf("%d", &z);
    if (x > y > z)
    {
        printf("x is the gratest");
    }
    else if (y > x > z)
    {
        printf("y is the greatest");
    }
    else
    {
        printf("z is the greates");
    }
    return (0);
}