/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdint.h>
#include<stdbool.h>
void setbit()
{
    printf("enter data to set \n");
    unsigned int data;
    scanf("%u",&data);
    data|=(1<<5);
    printf("print the data=%u\n",data);
    
}
void clearbit()
{
    printf("enter data to clear \n");
    unsigned int data;
    scanf("%u",&data);
    data&=~(1<<2);
    printf("print the data=%u\n",data);
}
void toggle()
{
    
      printf("enter data to toggle \n");
    unsigned int data;
    scanf("%u",&data);
    data=(uint8_t)~data;
    printf("print the data=%u\n",(unsigned int)data);
}
void readmsb()
{
    printf("enter data to read \n");
    uint8_t data;
    uint8_t msb;
    scanf("%hhu",&data);
    printf("%hhu\n",(data>>7));
}


void swaptwobits()
{
    
    uint8_t val=32;
    uint8_t result;
    result=(((val>>5)&1)<<2)|(((val>>2)&1)<<5);
   
    printf("%hhu\n",result);

  
}
void reverseallbits()
{
for (int i = 0; i < 8; i++)
{
    uint8_t val=32;
    uint8_t result;
    result |= ((val >> i) & 1) << (7 - i);
    printf("%hhu\n",result);
}
}
void countbits()
{
    int a;
    printf("\nenter the numbers\n");
    scanf("%d",&a);
    int count=0;
    while(a!=0)
    {
        a=a&(a-1);
        count++;
    }
    printf("count=%d",count);
}
bool powerof()
{
    int a;
    printf("\nenter number=");
    scanf("%d",&a);
    if(((a>>0)&1)==0)
    {
        return true;
    }
    else{
        return false;
    }
}
void firstbit()
{
    uint8_t data=1;
    printf("firstbit=%d\n",(data>>0)&1);
}
void lastbit()
{
    uint8_t data=128;
    printf("lastbit=%d\n",(data>>7)&1);
}
void countleadingzeros()
{
    uint8_t data;
    printf("enter data");
    scanf("%d",&data);
    int count=0;
            int i=7;

    while(data!=0)
    {
        if(((data>>i)&1)==0)
        {
            count++;
            
        }
        else{
            break;
        }
        i--;
    }
            printf("count leadingzero=%d",count);

}
void counttrailingzros()
{
     uint8_t data;
    printf("enter data");
    scanf("%d",&data);
    int count=0;
            int i=0;

    while(data!=0)
    {
        if(((data>>i)&1)==0)
        {
            count++;
            
        }
        else{
            break;
        }
        i++;
    }
            printf("count leadingzero=%d",count);
}
void printbinary()
{
 static int expression;
  printf("expression%d\n",expression);
    while(expression!=4)
    {
            printf("\npress 1 for 8bit\n press 2 for 16bit\npress 3 for 32bit\npress 4 to stop=\n");
            scanf("%d",&expression);
         switch(expression)
         {
             case 1:
             {
             uint8_t data;
                printf("enter  data");
                scanf("%hhu",&data);
                 printf("8-bit binary=");
                for(int i=7;i>0;i--)
                {
                    printf("%d",(data>>i)&1);
                }
                break;
             }
                case 2:
                {
             uint16_t data;
                printf("enter  data");
                scanf("%hu",&data);
                printf("16-bit binary=");
                for(int i=15;i>0;i--)
                {
                    printf("%d",(data>>i)&1);
                }
                break;
                }
                case 3:
                {
             uint32_t data;
                printf("enter  data");
                scanf("%u",&data);
                 printf("32-bit binary=");
                for(int i=31;i>0;i--)
                {
                    printf("%d",(data>>i)&1);
                }
                break;
                }
                case 4:
                {
                expression=4;
                break;
                }
                default:
                printf("\ngive valid number\n");
                break;
                
         }

    }
}
void findparity()
{
    uint8_t data;
    printf("enter data");
    scanf("%d",&data);
    int count=0;
    while(data!=0)
    {
        data=data&(data-1);
        count++;
    }
    (count%2==0)?printf("even parity"):printf("odd parity");
}
void longestsequence()
{
 unsigned int n = 0b001111001110;
    int count = 0;
    int max_count = 0;

    while (n != 0)
    {
        if (n & 1)
        {
            count++;

            if (count > max_count)
                max_count = count;
        }
        else
        {
            count = 0;
        }

        n = n >> 1;
    }

    printf("Longest sequence of 1s = %d\n", max_count);
}
int main()
{
   setbit();
    clearbit();
   toggle();
   readmsb();
   swaptwobits();
   reverseallbits();
  countbits();
 if(powerof())
 {
     printf("True\n");
 }
 else{
     printf("False\n");
 }
 firstbit();
 lastbit();
 countleadingzeros();
 counttrailingzros();
printbinary();
findparity();
longestsequence();
}