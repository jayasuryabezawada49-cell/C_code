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
   return count;
}

int main()
{
    int a=9;
    int result = palindrome(a);
    if(result==2)
    {
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}
