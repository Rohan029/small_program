//Perfect no.
#include<stdio.h>
int main()
{
    int rem,sum=0,n1,i;
    printf("Enter a number : ");
    scanf("%d",&n1);
    //printf("\n%d",n1);

    for(i=1;i<n1;i++)
    {
        printf("\nrunning for loop");
        rem=n1%i;
        printf("\n%d",rem);
        printf("\nRunning\n");
        if(rem==0)
        {
           sum = sum + i;

        }
    }
    if(sum==n1)
        printf("Perfect");
    else
        printf("not perfect");
}
