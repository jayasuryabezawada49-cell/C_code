#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[8]={45, 12, 78, 34, 89, 23, 67, 10};
   
    int max=INT_MIN;
    int min=INT_MAX;
    int second_max,second_min;
    
    for(int i=0;i<8;i++)
    {
        
    
            if(arr[i]>max)
            {
                second_max=max;
                max=arr[i];
            }
            else if(arr[i]<min)
            {
                second_min=min;
                min=arr[i];
            }
        
    }
    printf("second_max=%d\n",second_max);
    printf("second_min=%d\n",second_min);
}
