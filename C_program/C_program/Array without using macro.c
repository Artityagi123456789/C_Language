#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
         printf("enter the input for index:\n");
         scanf("%d",&a[i]);
    }
    //printf("enter the input for index:\n");
    //scanf("%d",&a[i]);

    //for(i=0;i<10;i++)
    {
        printf("array elements are as follows:");
        for(i=0;i<10;i++)
          scanf("%d",a[i]);
    }
    return 0;

}
