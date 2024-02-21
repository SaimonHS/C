// write a c prgm to find largest no. from given 3 intgs.
// test data: 12,25,52
// output: 1st number= 12, 2nd number=25, 3rd number= 52.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three integers:");
    scanf("%d %d %d", &a, &b, &c);

    printf("1st number=%d, 2nd number=%d, 3rd number=%d\n", a, b, c);

    if (a > b && a > c)
    {
        printf("\n%d is the Gratest among three", a);
    }
    else if (b > c)
    {
        printf("\n%d is the Gratest among three", b);
    }
    else
    {
        printf("\n%d is the Gratest among three", c);
    }
}