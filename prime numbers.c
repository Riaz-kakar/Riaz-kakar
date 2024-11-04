#include<stdio.h>
int main()
{
    int i,n,t,h=0;
    printf("Enter the number");
    scanf("%d",&i);
    for(n=1;n<=i;n++)
    {
                     
         t=i%n;
         if(t==0)
         {
                 h++;
         }
    }
     if(h==2)
     {
             printf("The number is prime");
     } 
     else
     {
         printf("The number is composite");
     }
}                      
