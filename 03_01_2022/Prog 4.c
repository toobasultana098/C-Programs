#include <stdio.h>
int main()
{
    char string1[20];
    char string2[20];
    strcpy(string1, "Welcome");
    strcpy(string2, "TOPCclass");
    printf("Returned String : %s\n", strcat( string1, string2 ));
    printf("Concatenated String: %s\n", string1 );
    return 0;

}
