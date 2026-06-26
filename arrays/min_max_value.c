#include <stdio.h>

int main()
{
   int size;
   printf("enter number of elments=");
   scanf("%d",&size);
   int arr[size],min,max;
   //taking elmnts
   printf("enter the %d elments\n",size);
   
   for(int i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
   }
   
   min=arr[0];
   max=arr[0];
   for(int i=0;i<size;i++)
   {
       if(arr[i]>max)
       {
           max=arr[i];
       }
       if(arr[i]<min)
       {
           min=arr[i];
       }
   }
   
   //
   printf("printing min=%d \nmax=%d\n",min,max);

}
