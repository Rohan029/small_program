 //Write a program to display the sequence 1, 4, 9, 16, 25, 36, 49, ………………..
#include<stdio.h>
int main()
{
    int i,n,sum,a,b;
    printf("Enter the length:\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        sum = i*i;
        printf("%d, ",sum);
    }
}
