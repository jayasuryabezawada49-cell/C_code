#include <stdio.h>

int main()
{
    int size;
   
    printf("enter no of elemnts=");
    scanf("%d",&size);
    int arr[size];
    printf("enter %d elemntsents\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
     for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("max=%d\n",max);
  int arr2[max+1];
  int size1=sizeof(arr2)/sizeof(arr2[0]);
  for(int i=0;i<size1;i++)
  {
      arr2[i]=0;
  }
  
  for(int i=0;i<size;i++)
  {
      arr2[arr[i]]++;
  }
  printf("value\tcount\n");
  for(int i=0;i<size1;i++)
  {
      if(arr2[i]!=0)
      {
      printf("%d\t%d\n",i,arr2[i]);
      }
  }
}
