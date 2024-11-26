#include<stdio.h>
int main()

{
    int n = 5;
    int i,j;
    int arr[5]= {3,10,7,4,5};

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
    printf("After bubble sort - \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}
