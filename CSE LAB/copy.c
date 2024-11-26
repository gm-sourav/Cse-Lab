#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int A[n],B[n];

    printf("Enter element of first array - \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    for( i=0;i<n;i++)
    {

        B[i] = A[i];

    }
    printf("Printing the copied array - \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",B[i]);
    }


    return 0;
}
