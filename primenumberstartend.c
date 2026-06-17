#include<stdio.h>
int main()
{
    int start,end;
    printf("enter start number:");
    scanf("%d",&start);
    printf("enter end number:");
    scanf("%d",&end);
    for(int i=start;i<=end;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("this nuber is palindrome:%d\n",i);
            
        }
        else
        {
             printf("this nuber is not palindrome:%d\n",i);
        }
    }
}
