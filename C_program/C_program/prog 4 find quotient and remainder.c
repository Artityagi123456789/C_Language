#include<stdio.h>
int main()
{
   int a,b,quo,rem;
   printf("enter a number: ");
   scanf("%d%d",&a,&b);

   if(b)
   {
         quo=a/b;
         rem=a%b;
        printf("quotient = %d,Remainder=%d\n",quo,rem);
    }
   else
       printf(" divied by zero error");


   return 0;
}
