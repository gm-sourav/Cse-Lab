#include<stdio.h>
int main()
{
    int n;
    printf("Enter integer for condition :- ");
    scanf("%d",&n);

    if (n == 1)
    {
        float pi = 3.1416,r,area;
        printf("Enter radius :- ");
        scanf("%f",&r);

        area = pi * r * r;
        printf("Area is %.4f\n",area);


    }
    else if (n == 2)
    {
        float c,f;
        printf("Enter celcius :- ");
        scanf("%f",&c);
        f = (9 * c ) / 5+ 32;
        printf("F is %.2f\n",f);
    }
    else
    {
        float l,w,perimeter;
        printf("Enter length and weidth :- ");
        scanf("%f %f",&l,&w);
        perimeter = 2 * (l + w);
        printf("Perimeter is %.2f\n",perimeter);


    }
    
    






    return 0;
}