#include <stdio.h>
#include <math.h>
int isPerfectSquare(int x)
{
    int s = sqrt (x);
    if(s*s == x)
        return 1;
    else
        return 0;
}
int isFibonacci(int n)
{
    if(isPerfectSquare (5*n*n + 4) || isPerfectSquare (5*n*n - 4))
        return 1;
    else
        return 0;
}
int main()
{
    int i;
    for (i = 1; i<= 10; i++)
    {
        if(isFibonacci(i))
            printf("%d is a Fibonacci Number \n", i);
        else
            printf("%d is not a Fibonacci Number. \n", i);
    }
    return 0;
}
