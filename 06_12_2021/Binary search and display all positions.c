#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[30],n,i,key, FOUND=0;
printf("\n How many numbers");
scanf("%d",&n);
if (n > 30)
{
    printf("\n Too many Numbers");
    exit(0);
}
printf("\n Enter the array elements \n");
for(i=0; i<n; i++)
scanf("%d", &a[i]);
printf("\n Enter the key to be searched \n");
scanf("%d", &key);
for(i=0; i<n; i++)
if(a[i]==key)
{
    printf("\n Found at %d", i);
    FOUND = 1 ;
}
if(FOUND == 0)
printf("\n NOT FOUND...");
return 0;
}

