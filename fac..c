#include<stdio.h>

int fact(int n)
{

    if (n == 1)
    {
     return 1;
    }
    else{

        return  n * fact(n - 1);

    }

}

int main()

{
    int number;
    printf("Enter an integer - ");
    scanf("%d", &number);

    int result = fact(number);
    printf("Factorial is %d\n",result);


}
