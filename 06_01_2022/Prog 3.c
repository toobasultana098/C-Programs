#include <stdio.h>
#define MAX 100
int main()
{
char str[MAX]={0};
int i;
printf("Enter a string: ");
scanf("%[^\n]s", str);
if((str[0]>= 'a' && str[0]<='z'))
{
str[0]=str[0]-32;
}
for(i=1; str[i]!= '\0'; i++)
{
if(str[i]==' ')
{
++i;
if(str[i]>='a' && str[i]<='z')
{
str[i]=str[i]-32;
continue;
}
}
else
{
if(str[i]>= 'A' && str[i]<='Z')
    str[i]=str[i]+32;
}
}
printf("Capitalize string is: %s\n", str);
return 0;
}
