//Code to find area of Triangle and Retangle by taking user input
#include <stdio.h>
int main()
{
    float length1, breadth1, area1, length2, breadth2, area2;
    printf("Enter the Length for triangle:");
    scanf("%f", &length1);
    printf("Enter the breadth for triangle:");
    scanf("%f", &breadth1);
    area1 = ((float)1 / 2) * length1 * breadth1;
    printf("the area of triangle: %.2f\n", area1);
    printf("Enter the Length for retangle:");
    scanf("%f", &length2);
    printf("Enter the breadth for retangle:");
    scanf("%f", &breadth2);
    area2 = length2 * breadth2;
    printf("the area of retangle: %.2f", area2);
}