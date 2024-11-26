
// take an array as user input and print that array....

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of array - ");
    scanf("%d",&n);

    int A[n];
    // scanning array element
    printf("Enter element of array :-  ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    // printing array
    printf("Printing the array :- "); // 1 2 3
    for(i=0;i<n;i++) // 0<3
                     // 1<3
                     // 2<3
    {
        printf("%d ",A[i]);
    }



    return 0;
}
