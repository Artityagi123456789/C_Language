#include<stdio.h>
main()
{
    int a,b;
    printf("enter two number: ");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("max num is %d",a);
    }
    else
    {
        printf("max num is %d",b);
    }
    return 0;
}
