//Write a program to display the sequence 1, 2, 4, 7, 11, ……………
#include<stdio.h>
int main()
{
    int num1=0,num2,n,i,temp,sum=1;
    printf("Enter the length:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        sum = sum+i;
        printf("%d, ",sum);
    }

}
