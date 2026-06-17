#include<stdio.h>
int main()
{
    int a,b,c;
    int choice,count;
    printf("select choice to find maximum=1 or minimum=2 \n");
    scanf("%d",&choice);
    printf("select to find for 2 numbers or three numbes\n");
    scanf("%d",&count);
    switch(choice)
     {
         case 1:
         if(count==2)
         {
             printf("enter 2 numbers\n");
             printf("enter a =");
             scanf("%d",&a);
               printf("enter b =");
              scanf("%d",&b);
             (a>b)?printf("a is max"):printf("b is max");
         }
         else if(count==3)
         {
             printf("enter three numbers");
              printf("enter a =");
             scanf("%d",&a);
               printf("enter b =");
              scanf("%d",&b);
               printf("enter c =");
             scanf("%d",&c);
             if(a>b&&a>c)
             {
                 printf("a is max");
             }
             else if(b>a&&b>c){
                 printf("b is max");
                 
             }
             else{
                 printf("c is max");
             }
         }
         break;
          case 2:
           
         if(count==2)
         {
             printf("enter 2 numbers\n");
             printf("enter a =");
             scanf("%d",&a);
               printf("enter b =");
              scanf("%d",&b);
             (a<b)?printf("a is min"):printf("b is min");
         }
         else if(count==3)
         {
             
             printf("enter three numbers");
              printf("enter a =");
             scanf("%d",&a);
               printf("enter b =");
              scanf("%d",&b);
               printf("enter c =");
             scanf("%d",&c);
             if(a<b&&a<c)
             {
                 printf("a is min");
             }
             else if(b<a&&b<c){
                 printf("b is min");
                 
             }
             else{
                 printf("c is min");
             }
         }
     }
    
}
