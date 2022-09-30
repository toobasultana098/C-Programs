#include<stdio.h>
void linear_search(int A[], int, int);
 int main()
{
    int array[100], search, c, n, position;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    printf("Enter %d numbers\n", n);
    for ( c = 0 ; c < n ; c++ )
    {
        scanf("%d",&array[c]);
    }
    printf("Enter the number to search\n");
    scanf("%d",&search);
    linear_search(array, n, search);
}
void linear_search(int A[], int n, int find)
{
    int c;
    int Flag =0;
    for ( c = 0 ; c <= n ; c++ )
    {
        if ( A[c] == find )
        {
            printf ("\n %d is present in the location %d",find, (c+1));
            Flag = 1;
        }
    }
    if (Flag ==0)
    {
        printf("The number %d is not present in the array", find);
    }
}
