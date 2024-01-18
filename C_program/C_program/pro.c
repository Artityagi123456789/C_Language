#include <stdio.h>

int main() {
    int date, month, year;
    printf("Please enter the date in the form of dd/mm/yyyy:");
    scanf("%d/%d/%d", &date, &month, &year);

    printf("the date you entered was:  day-%d,month-%d,year-%d", date, month, year);
    return 0;
}
