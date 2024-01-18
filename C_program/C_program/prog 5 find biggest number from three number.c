#include<stdio.h>
int main()
{
   int a,b,c,biggest;
   printf("enter three number: ");
   scanf("%d%d%d",&a,&b,&c);
   if (a>b)
   {
       if(a>c)
          biggest=a;
       else
          biggest=c;
   }
   else
   {
       if(b>c)
         biggest=b;
       else
         biggest=c;
   }
    printf("biggest number is %d\n",biggest);

   return 0;
}
