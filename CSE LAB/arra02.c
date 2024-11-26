// take array as user input and copy the arry to another array...

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter size of array :- ");
    scanf("%d",&n);
    int A[n],B[n];

    printf("Enter element of first array - \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<10;i++)
    {
        B[i] = A[i];
    }
    printf("\n");

    printf("Printing copied array - \n");

    for(i=0;i<10;i++)
    {
        printf("%d ",B[i]);
    }



    return 0;
}

