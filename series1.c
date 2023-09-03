//Write a program to display the sequence 1, 2, 2, 4, 8, 32, 256, ………………..
#include<stdio.h>
int main()
{
    int i,n,a=1,b=2,sum;
    printf("Enter the num:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       printf("%d ",a);
       sum=a*b;
       a=b;
       b=sum;
    }
}
