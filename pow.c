#include<stdio.h>
int main()
{
    int num,pow,result=1;
    printf("Enter a number :\n");
    scanf("%d",&num);
    printf("Enter the power:\n");
    scanf("%d",&pow);

    while(pow!=0)
    {
        result=result*num;
        pow--;
    }

    printf("\n answer = %d",result);
}
