#include <stdio.h>

int main()
{
   int n;
   printf("enter the no of  elements\n");
   scanf("%d",&n);
   int arr[n];
   printf("enter %d elments ",n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
       
   }
   for(int i=0;i<n;i++)
   {
       printf("%d",arr[i]);
       
   }
printf("\n");
return 0;
}
