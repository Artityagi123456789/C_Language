#include<stdio.h>
void main()
{
  int a[5],i;
  printf("enter the element of array: \n");
  for(i=0;i<=5;i++)
    {
        printf("a[%d] :",i);
        scanf("%d",&a[i]);
    }
  printf("The elements from the array displayed in the reverse order are :\n");
  for(i=5; i>=0; i--)
   {
     printf("a[%d] : ",i);
     printf("%d\n",a[i]);
   }
}
