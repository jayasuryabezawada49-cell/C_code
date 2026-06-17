#include<stdio.h>
int main()
{
   int a;
   int sum=0;
   printf("enter the number:");
   scanf("%d",&a);
   for(int i=1;i<a;i++)
   {
       if(a%i==0)
       {
           sum=sum+i;
       }
       
   }   
       if(sum==a)
       {
           printf("it is perfect number");
       }
       else{
           printf("it is not perfect number");
       }
   
    
}
