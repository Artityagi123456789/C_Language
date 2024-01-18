#include <stdio.h>

int main() {
    // Write C code here
int num;
printf("enter a three digit number: ");
scanf("%d",&num);
    if (num>=100 && num<=999)
    {
        printf("num is 3 digit number.");
    }
    else
    {
        printf("num is not 3 digit number.");
    }
return 0;
}
