#include <stdio.h>

int main()
{
   int size;
   printf("enter number of elments=");
   scanf("%d",&size);
   int arr[size],k=1;
  int size1=size;
   //taking elmnts
   printf("enter the %d elments\n",size);
   
   for(int i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
   }
   
  for(int i=0;i<size;i++)
  {
      for(int j=i+1;j<size;j++)
      {
          if(arr[i]==arr[j])
          {
             for(int k=j;k<size-1;k++)
             {
                 arr[k]=arr[k+1];
                 
             }
             size--;
             j--;
          }
      }
  }
   printf("output\n");
  for(int i=0;i<size;i++)
  {
      printf("%d",arr[i]);
  }

}
