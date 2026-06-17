#include <stdio.h>

int palindrome(int a)
{
    int count=0;
   for(int i=1;i<=a;i++)
   {
       if(a/i==2)
       {
           count++;
       }
   }
     if(count==2)
    {
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
 
  
}

int main()
{
    int a=9;
    palindrome(a);
   
    return 0;
}
