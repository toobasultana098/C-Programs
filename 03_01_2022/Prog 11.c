#include <stdio.h>
#include <string.h>
int main()
{
    int n = 7;
    char string1[30];
    char string2[30];
    strcpy(string1, "HappyNewYear");
    strcpy(string2, "WelcomeToPCclass");
    printf("Returned String: %s\n", strncat( string1, string2,n ));
    printf("Concatenated String: %s\n", string1 );
    return 0;
}
