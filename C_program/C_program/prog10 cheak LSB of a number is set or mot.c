#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);
    if(num & 1)
        printf("LSB of %d is a set(1).\n",num);
     else
        printf("LSB of %d is a unset(0).\n",num);
    return 0;


}
