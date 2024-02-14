#include <stdio.h>
int main()
{
    char lowercase;
    printf("enter ur lower case letter:");
    scanf("%c", &lowercase);
    printf("The upper case is: %c", lowercase - 32);
}