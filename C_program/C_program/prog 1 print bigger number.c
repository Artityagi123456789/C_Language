#include<stdio.h>
int main()
{
   int a,b;
   printf("enter a two number: ");
   scanf("%d%d",&a,&b);

   if (a>b)
        printf("biggest number =%d\n",a);
   else
        printf("biggest number =%d\n",b);
   return 0;

}
