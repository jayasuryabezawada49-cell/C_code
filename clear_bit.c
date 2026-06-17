#include<stdio.h>
int main()
{
      unsigned int bit_position;
       unsigned int data=31;
	printf("present data%d\n",data);
	printf("enter the bit_position");
	scanf("%d",&bit_position);
       data &= ~(1 << bit_position);
       printf("%d",data);
}
