#include<stdio.h>
int main()
{
    int a;
     printf("enter the numbers");
     scanf("%d",&a);
    int factorial=1;
  while(a!=0)
  {
    factorial=factorial*a;
    a--;
  }
  printf("%d",factorial);
   
    
}
