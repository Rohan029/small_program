#include<stdio.h>

int main()
{
int no,i,ans;
printf("Enter a number:");
scanf("%d",&no);

for(i=2;i<=no/2;i++)
{
    ans=no%i;
}
if(ans==0)
    {

        printf("The number %d is not prime",no);
    }
    else
    {
        printf("The number %d is prime",no);
    }
}
