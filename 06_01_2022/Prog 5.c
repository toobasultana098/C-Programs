#include <stdio.h>
int main ()
{
    int i, j;
    int a[5][3];
    printf("Enter elements of 1st matrix\n");
    for(i=0; i<5; ++i)
        for(j=0; j<3; ++j)
        {
            printf("Enter a[%d][%d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d", a[i][j]); printf("\t");
            printf("\n");
    }
    return 0;
}
