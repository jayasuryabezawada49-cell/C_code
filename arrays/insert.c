#include <stdio.h>

int main()
{
   int size,value,pos;
   printf("enter the no of elemnts=");
   scanf("%d",&size);
   int arr[size+size];
   printf("enter the %d elments\n",size);
   for(int i=0;i<size;i++)
   {
   scanf("%d",&arr[i]);
   }
   printf("enter the value");
   scanf("%d",&value);
   printf("enter the position ");
   scanf("%d",&pos);
   for(int i=size;i>=pos;i--)
   {
       arr[i+1]=arr[i];
   }
   arr[pos]=value;
   size++;
   printf("printing the values\n");
     for(int i=0;i<size;i++)
   {
   printf("%d\n",arr[i]);
   }
  
}
