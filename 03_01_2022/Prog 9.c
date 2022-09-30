#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int I, i;
    printf("\nEnter a string : ");
    gets(s);
    I=strlen(s);
    printf("\nThe reverse of the string is ");
    for(i=I-1; i>=0; i--)
        printf("%c", s[i]);
    return 0;
}
