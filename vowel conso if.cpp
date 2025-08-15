#include<stdio.h>
main()
{
    char d;
    printf("Enter a character ");
    scanf("%c", &d);
    if (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u' )
    {
        printf("%c is a vowel.\n", d);
    }
    else
    {
        printf("%c is a consonant.\n",d);
    }
}

