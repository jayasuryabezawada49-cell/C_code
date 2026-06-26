#include <stdio.h>

int main()
{
    int arr[]={1,0,2,0,3,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        
         if(arr[i]==0)
         {
             for(int j=i;j<size-1;j++)
             {
                 int temp=arr[j+1];
                 arr[j+1]=arr[j];
                 arr[j]=temp;
             }
           i--;
             
         }
        
        
    }
     for(int i=0;i<size;i++)
         {
             printf("%d\n",arr[i]);
         }
}
