#include<stdio.h>
int main()
{
    int n,i;
    int x,y,z;
    x=0;
    y=1;

    printf("enter a number of terms: ");
    scanf("%d",&n);

    for(i=1;i<n;i++)
      {
        z=x+y;
        printf("%d",z);
        x=y;
        y=z;


        printf("\n");
    }
    return 0;
}

