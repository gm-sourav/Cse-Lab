#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter temperature in Fahrenheit :- ");
    scanf("%f",&f);

    c =  5 * (f - 32) / 9;

    printf("Temperature in Celcius %.2f\n",c);

    return 0;




}