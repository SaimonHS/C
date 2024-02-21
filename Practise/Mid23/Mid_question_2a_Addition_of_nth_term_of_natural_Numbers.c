#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n to find the addition upto nth term of natural number:");
    scanf("%d", &n);
    printf("The Sum of natural number upto %d is : %d", n, (((n + 1) * n) / 2));
    return (0);
}