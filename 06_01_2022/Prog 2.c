#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
char str[100];
int a,e,i,o,u, consonant, whitespace;
a=e=i=o=u=consonant=whitespace=0;
int k;
printf("Enter a line of string: ");
scanf("%[^\n]s",str);
for (k=0;k<strlen(str); k++)
{

str[k] = tolower(str[k]);
if(str[k]== 'a')
{
    a = a+1;
}
else if(str[k] == 'e')
{
     e = e +1;
}
else if(str[k] == 'i')
{
    i=i+1;
}
else if( str[k] == 'o')
{
    o=o+1;
}

else if(str[k] == 'u')
{
    u=u+1;
}

else if((str[k]>= 'a' && str[k] <= 'z')||(str[k]> 'A' && str[k] <= 'Z'))
{
    consonant ++;
}
else if (str[k] =' ')
{
    whitespace++;
}
}
printf("a : %d\n", a);
printf("e : %d\n",e);
printf("i : %d\n",i);
printf("o : %d\n",o);
printf("u : %d\n",u);
printf("Consonant : %d\n", consonant);
printf("whitespace : %d\n",whitespace);
}
