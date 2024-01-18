#include<stdio.h>
int main()
{
    int a=5,b=10,temp;

        temp=a;
        a=b;
        b=temp;
    printf("The value of a after swapping:%d ",a);
    printf("The value of b after swapping:%d ",b);

    return 0;
}
