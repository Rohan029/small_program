//sort the array in ascending order
#include<stdio.h>
int main()
{
    int a[5],i,j,temp;
    printf("Enter the 5 array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n Elements before sorting\n:");
    for(i=0;i<5;i++)
    {
        printf("%d, ",a[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nThe array after sorting:");
    for(i=0;i<5;i++)
    {
        printf("%d, ",a[i]);
    }
}
