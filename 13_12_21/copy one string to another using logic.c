#include <string.h>
#include<ctype.h>
int main()
{
    int i;
    char s1[] = "Hello, world!";
    char s2[20];
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    puts(s2);
}


