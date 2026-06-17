#include<stdio.h>
int main()
{
    int a=0,b=1,c=0;
    int count=0;
    while(count!=20)
    {
        printf("%d\n",a);
        c=a+b;
        
        a=b;
        b=c;
        count++;
    }
    
}
