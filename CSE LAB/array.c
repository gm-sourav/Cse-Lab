#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter size of array - ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter The Element of array - \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n");

    printf("Printing array - \n");

    for( i=0;i<n;i++)

    {
        printf("%d ",arr[i]);
    }



    return 0;
}
