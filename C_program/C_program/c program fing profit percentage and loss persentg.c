#include<stdio.h>

int main()
{
    int cp,sp,loss,profit,profit_per,loss_per;
    printf("enter the cost price: ");
    scanf("%d",&cp);
    printf("enter the selling price: ");
    scanf("%d",&sp);

    profit = sp-cp;
    profit_per = ((profit*100)/cp);
    printf("profit percentage is %d\n:",profit_per);

    loss = cp-sp;
    loss_per = ((loss*100)/cp);
    printf("loss percentage is %d\n:",loss_per);


return 0;
}
