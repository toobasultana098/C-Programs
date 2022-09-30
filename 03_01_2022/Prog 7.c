#include<stdio.h>
#include<string.h>
int main()
{
    char x[50],y[]="a programming example";
    strcpy(x, "A Programming Example");
    if(strcmp(x,"A Programming Example")==0)
       printf("Equal \n");
    else
        printf("Unequal \n");
    if( strcmp(y,x) == 0)
        printf("Equal \n");
    else
        printf("Unequal \n");
    return 0;
}

