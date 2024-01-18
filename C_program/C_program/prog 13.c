#include<stdio.h>
int main()
{
    int n,num;
    long fact=1;
    printf("enter a number: ");
    scanf("%d",&n);
    num=n;
    if(n<0)
        printf("no factorial is negative number. ");
    else
    {
        while(n>1)
        {
           fact*=n;
            n--;
        }
        printf("factorial of %d = %ld\n",n,fact);
    }
    return 0;
}

