/*Lab Assignment-01*/
#include <stdio.h>
int main()
{
    int a = 5, b = 6;
    double c = 4.412, d = 5.842;
    float e = 7.981, f = 8.234;
    char g = '5';
    printf("The sum of two int: %d\n", a + b);
    printf("The sum of two double: %.3lf\n", c + d);
    printf("The sum of two float: %.3f\n", e + f);
    printf("The sum of int & float: %.3f\n", a + e);
    printf("The sum of int & double: %.3lf\n", a + c);
    printf("The sum of float & double: %.3lf\n", e + c);
    printf("The sum of int & char: %d\n", a + g); // here the (g=5) is used as ASCII 5=53!
    return 0;
}
