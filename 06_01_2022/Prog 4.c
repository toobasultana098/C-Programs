#include <stdio.h>
int main ()
{
    int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
