#include<stdio.h>


int getsum(int x,int y,int z)
{

   return(x + y +z);

}


int main()
{

  int num1,num2,num3,result;

  printf("Enter three integer number - ");
  scanf("%d %d %d",&num1,&num2,&num3);

  result = getsum(num1,num2,num3);
  printf("Sum is %d\n",result);


}



