#include <stdio.h>
#include <string.h>
int main()
{
    char s1[]="Hello, world!";
    char s2[20];
    strcpy(s2, s1);
    puts (s2);
}
