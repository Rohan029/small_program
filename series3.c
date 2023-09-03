// Write a program to display the sequence 1, 2, 4, 8, 16, 32, 64, ………………..
#include<stdio.h>
#include<math.h>

int main()
{
    int num,i,sum;
    printf("Enter the length:\n");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        sum = pow(2,i);
        printf("%d, ",sum);
    }
}
