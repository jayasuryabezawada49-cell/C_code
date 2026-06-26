#include <stdio.h>

int main()
{
   int size,value,pos;
   printf("enter the no of elemnts=\n");
   
   scanf("%d",&size);
   if(size<=1)
   {
       printf("un sufficent elmnts");
       return 0;
   }
   int arr[size+size];
   printf("enter the %d elments\n",size);
   for(int i=0;i<size;i++)
   {
   scanf("%d",&arr[i]);
   }
  
   printf("enter the position for deletion  ");
   scanf("%d",&pos);
   for(int i=pos;i<size;i++)
   {
       arr[i]=arr[i+1];
   }
 
   size--;
   printf("printing the values\n");
     for(int i=0;i<size;i++)
   {
   printf("%d\n",arr[i]);
   }
  
}
