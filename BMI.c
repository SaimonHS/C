#include<stdio.h>
int main(){
int num1;
float num2;
float num3;
float BMI;
printf("Your Age:");
scanf("%d",&num1);
printf("Your Weight:");
scanf("%f",&num2);
printf("Your Hight:");
scanf("%f",&num3);
BMI=num2/(num3*num3);
printf("Your BMI= %f\n",BMI);
}
