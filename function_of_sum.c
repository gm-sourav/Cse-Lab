#include<stdio.h>
int sum(int n1,int n2,int n3);


int main()
{
    int a,b,c,result;

    printf("Enter three integer number :- ");
    scanf("%d %d %d",&a,&b,&c);

    result = sum(a,b,c);
    printf("Sum is %d\n",result);


   return 0;

}

int sum(int n1,int n2,int n3)
{

    return (n1 + n2 + n3);
}


