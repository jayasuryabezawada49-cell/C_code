



#include <stdio.h>

void Largestelement(int arr[],int size)
{
    printf("Largestelement\n");
    int largest=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    printf("largest=%d",largest);
}

void smallestelement(int arr[],int size)
{
    printf("smallestelement\n");
    int smallest=arr[0];
    for(int i=0;i<size;i++)
    {
        if(smallest<arr[i])
        {
            smallest=arr[i];
        }
    }
    printf("smallest=%d",smallest);
}

void sumofelements(int arr[],int size)
{
    printf("sumofelements\n");
     int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    printf("sum=%d",sum);
}

void averageofelements(int arr[],int size)
{
    printf("averageofelements\n");
     int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=i;
    }
    printf("average=%d",sum/size);
}

void Countevennumbers(int arr[],int size)
{
    printf(" Countevennumbers\n");
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d",arr[i]);
        }
    }
}

void Countoddnumbers(int arr[],int size)
{
    printf("Countoddnumbers\n");
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            count++;
            printf("count=%d\n",count);
        }
    }
}

void Linearsearch(int arr[],int size)
{
    printf(" Linearsearch\n");
    int key=7;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            printf("%d\n",arr[i]);
        }
    }
}

void Countoccurrences(int arr[],int size)
{
    printf("Countoccurrences\n");
    int key=7,count=0;
     for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            count++;
            printf("%d\n",count);
        }
    }
}

void Firstoccurrence(int arr[],int size)
{
    printf("Firstoccurrence\n");
     int key=7;
     for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            
            printf(" Firstoccurrence=%d\n",arr[i]);
            break;
        }
    }
}

void Lastoccurrence(int arr[],int size)
{ 
    printf("Lastoccurrence\n");
     int key=7;
     int Lastoccurrence;
     for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            
            Lastoccurrence=i;
        }
    }
    printf("Lastoccurrence=%d\n",Lastoccurrence);

}

void Reversearray(int arr[],int size)
{
    printf("Reversearray\n");
    for(int i=0;i<size/2;i++)
    {
        int temp=arr[size-1-i];
        arr[size-1-i]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}



int main()
{
   int arr[] = {12, 7, 25, 18, 7, 42, 9, 18, 30, 7};
   int size=sizeof(arr)/sizeof(arr[0]);
   int n = 10;
 Largestelement(arr,size);
 smallestelement(arr,size);
 sumofelements(arr,size);
  averageofelements(arr,size);
  Countevennumbers(arr,size);
  Countoddnumbers(arr,size);
   Linearsearch(arr,size);
   Countoccurrences(arr,size);
    Lastoccurrence(arr,size);
     Reversearray(arr,size);
 
}
