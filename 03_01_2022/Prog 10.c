#include<stdio.h>
int main()
{
    char s[100];
    int i;
    printf("\nEnter a string :");
    gets(s);
    for(i=0; s[i] != '\0'; i++);
        printf ("the length of the string is %d",i);
    return 0;
}
