#include<stdio.h>
int main()
{
    int n,prod=1,rem;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        prod=prod*rem;
    }
        printf("product of digit is %d",prod);
        return 0;
}
