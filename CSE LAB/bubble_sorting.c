#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter size of array - ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the element of array - \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n");
    printf("After bubble sort - \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}
