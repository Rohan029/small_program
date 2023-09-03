//Write a program to display the sequence 21, 9, 21, 11, 21, 13, 21, .................
#include<stdio.h>
int main()
{
    int n1=21,n2=9,i,n,sum=0,temp=0;
    n=50;
    for(i=0;i<n;i=i+2)
    {
        sum = n1;
        printf("%d, ",sum);
        temp= n2+i;
        printf("%d, ",temp);
    }
}
