//Write a program to display the sequence 1, 1, 5, 5, 9, 9, 13, 13, ………………………..
#include<stdio.h>
int main()
{
    int n1=-3,sum,i,n;
    n=40;
    for(i=4;i<n;i=i+4)
    {
        sum=n1+i;
        printf("%d , %d , ",sum,sum);
    }
}
