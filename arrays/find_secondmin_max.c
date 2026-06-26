#include <stdio.h>

int main()
{
   int size;
   printf("enter number of elments=");
   scanf("%d",&size);
   int arr[size],min,max;
   int second_max,second_min;
   //taking elmnts
   printf("enter the %d elments\n",size);
   
   for(int i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
   }
   
   min=arr[0];
   max=arr[0];
   second_max=max; second_min=min;
   for(int i=0;i<size;i++)
   {
       if(arr[i]>max)
       {
           second_max=max;
           max=arr[i];
       }
       if(arr[i]<min)
       {
           second_min=min;
           min=arr[i];
       }
   }
   
   //
   printf("printing min=%d \nmax=%d\n",second_min,second_max);

}
