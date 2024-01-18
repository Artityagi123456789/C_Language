#include<stdio.h>
int main()
{
    int num,digit,sum;
    printf("enter a number:");
    scanf("%d",&num);
    do{
        sum=0;
        while(num!=0)
        {
            digit=num%10;
            sum+=digit;
            num=num/10;
        }
        printf("%d\t",sum);
        num=sum;
    }while(num/10!=0);
    return 0;
}
