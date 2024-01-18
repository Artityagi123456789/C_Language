#include<stdio.h>
int main()
{
   int num;
   printf("enter a number: ");
   scanf("%d",&num);

   if (num<0)
   {
       printf(" number is negative\n");
       num=-num;
    }
       printf("value of number is: %d\n",num);

   return 0;
}
