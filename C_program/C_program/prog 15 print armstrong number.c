#include<stdio.h>
int main()
{
    int i,n,rem,cube,num,sum;
    printf("armstrong number are: ");
    for(num=100;  num<=999; num++)
    {
        n=num;
        sum=0;
        while(n>0)
        {
               rem=n%10;
                 n=n/10;
                cube=rem*rem*rem;
                sum=sum+cube;
        }
              if (num==sum)
                printf("%d\n",num);
    }
    return 0;
}
