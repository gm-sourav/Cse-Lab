#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter any integer number - ");
    scanf("%d",&n);

    long long int sum = 0;

    for(i = 1;i<=n;i++)
    {
        sum += i * i * i;

    }

    printf("The Sum is %lld\n",sum);



    return 0;
}
