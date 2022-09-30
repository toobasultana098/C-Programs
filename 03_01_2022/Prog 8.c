#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("\nEnter a string : ");
    gets(s);
    printf("\nThe reverse of the string is %s ",strrev(s)) ;
    return 0;
}
