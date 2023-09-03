//practise
#include<stdio.h>
int main()
{
    int num,num1,num2,prime,i,count,inum;
    printf("Enter 1st number:\n");
    scanf("%d",&num1);
    printf("Enter 2nd number:\n");
    scanf("%d",&num2);

    if(num1>num2)
    {
        int temp=num1;
        num1=num2;
        num2=num1;
    }
    printf("The prime no b/w %d & %d are:\n",num1,num2);
    for(num=num1;num<=num2;num++)
    {
        prime=1;
        //inum=num/2;
        for(count=2;count<num;count++)
        {
            if(num%count==0)
            {
                prime=0;
                break;
            }
        }
        if(prime!=0)
        {

            printf("\n%d\t",num);
        }
    }
}
