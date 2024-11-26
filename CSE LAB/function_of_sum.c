#include<stdio.h>





int main()
{
    int a,b,c,result;

    printf("Enter three integer number :- ");
    scanf("%d %d %d",&a,&b,&c);

    result = sum(a,b,c);
    printf("%d\n",result);




}
int sum(int n1,int n2,int n3)
{

    return (n1 + n2 + n3);
}


