#include<stdio.h>
int main()
{
    int a,b,n,sum,mul,div,min;

    printf("Enter two integer number - ");
    scanf("%d %d ",&a,&b);

    printf("Enter any integer number for condition - ");
    scanf("%d",&n);

    if (n == 1)
    {
        sum = a + b;
        printf("Sum is %d\n",sum);
    }
     else if (n == 2)
    {
        sum = a * b;
        printf("Mul is %d\n",mul);
    }
     else if (n == 3)
    {
        div = a / b;
        printf("Div is %d\n",div);
    }
     else
    {
        min = a - b;
        printf("Min is %d\n",min);
    }
    







    return 0;
}