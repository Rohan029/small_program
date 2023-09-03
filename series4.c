 //Write a program to display the sequence 7, 10, 8, 11, 9, 12, .................
 #include<stdio.h>
 int main()
 {
     int n,num1=7,num2=3,i,j,sum,temp;
     printf("Enter the length:\n");
     scanf("%d",&n);//10

     for(i=1;i<n;i++)
     {
         sum=0;
         sum = sum+num1;//7
         printf("%d, ",sum);

         num1++;//8

         temp = sum + num2;
         printf("%d, ",temp);//10

     }
 }
