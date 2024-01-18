#include<stdio.h>
int main()
{

    int a,b,choice;
    int add,sub,multi,div;
    printf("Enter user choice: ");
    scanf("%d",&choice);
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    if(choice==1)
    {
        add=a+b;
        printf("Addition: %d",add);
    }
    else if(choice==2)
    {
        sub=a-b;
        printf("Sutraction: %d",sub);
    }
    else if(choice==3)
    {
        multi==a*b;
        printf("Multiplication: %d",multi);
    }
    else if("choice==4")
    {
        div==a/b;
        printf("Division: %d",div);
    }
    else if("choice==5")
    {
         printf("exit");
    }
    return 0;
    }


