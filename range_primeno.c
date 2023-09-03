#include<stdio.h>
int main()
{
    int num1,num2,i,prime,count,inum;
    printf("Enter the 1st num:\n");
    scanf("%d",&num1);
    printf("Enter the 2nd num:\n");
    scanf("%d",&num2);

    //if num1>num2 then we will change it
    if(num1>num2)
    {
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("num1:%d & num2:%d",num1,num2);
    }
    printf("The prime no. b/w %d and %d are :",num1,num2); //let num1=11 &num2 =22
    for(int num=num1;num<=num2;num++)
    {
        prime=1;
        inum=num/2;
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
            printf("%d\t",num);
        }
    }
}

