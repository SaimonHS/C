#include <stdio.h>

int main()
{
    int x;
    printf("Enter the number of star lines: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {

        for (int k = 1; k <= x-i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j = j + 1)
        {

            printf(" *");
        }
        printf("\n");
    }
}