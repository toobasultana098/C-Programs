
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[15];
    char str2[15];
    int ret;
    strcpy(str1, "abcdef");
    strcpy(str2, "ABCDEF");
    ret = strcmp(str1, str2);
    printf("Value of ret is : %d",ret);
    return(0);
}
