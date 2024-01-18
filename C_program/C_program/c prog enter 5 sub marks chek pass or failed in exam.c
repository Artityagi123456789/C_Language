#include<stdio.h>
int main()
{
    int i,marks[100],p=0,f=0;
    for(i=0;i<=5;i++)
    {
        printf("enter the five subject marks:");
        scanf("%d",&marks[i]);
        if(marks  >= 33)
        {
            printf("student has pass");
            p++;
        }
        else
        {
            printf("student has fail.");
            f++;
        }
    }
return 0;
}

