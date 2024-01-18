#include<stdio.h>
int main(void)
{
    int num,sum=0,rem;
    printf("enter a number: ");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        sum=sum+rem;
    }
    printf("sum of digit is %d\n",sum);
    return 0;
}
