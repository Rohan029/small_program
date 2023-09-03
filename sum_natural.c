//Write a program to calculate the sum of n natural numbers
#include<stdio.h>
int main()
{
    int num,sum,i;
    printf("enter the number up to which you want the num:\n");
    scanf("%d",&num);

    sum=0;
    while(num!=0)
    {
        sum=sum+num;
        num--;
    }
    printf("The sum upto %d is: %d",num,sum);

}
