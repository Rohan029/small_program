//Write a program to display the sequence A1, B2, C3, …., Y25, Z26, A1, B2, ……………
#include<stdio.h>
int main()
{
    char a='A';
    int n1=1,i,n=26;
    for(i=0;i<n;i++)
    {
        printf("%c%d, ",a++,n1++);
    }
}
