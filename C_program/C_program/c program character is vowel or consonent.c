#include<stdio.h>
main()
{
    //a,e,i,o,u--- vowel
    //remaining all--- consonant
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o'|| ch=='u')
    {
        printf("character is vowel");
    }
    else
    {
        printf("character is consonant");
    }
    return 0;
}
