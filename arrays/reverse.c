#include <stdio.h>

int main()
{
   int size;
   printf("enter number of elments=");
   scanf("%d",&size);
   int arr[size];
   //taking elmnts
   printf("enter the %d elments\n",size);
   
   for(int i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
   }
   
   
    int n=size-1;
    //revesing the elments
   for(int i=0;i<size/2;i++)
   {
       int temp=arr[n];
       arr[n]=arr[i];
       arr[i]=temp;
       n--;
   } 
   //printing after the reverse
   printf("printing after revrse\n");
   for(int i=0;i<size;i++)
   {
       printf("%d\n",arr[i]);
   }
}
