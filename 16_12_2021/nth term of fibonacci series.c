#include<stdio.h>
int fib(int);
int main()
{
    int n;
    printf("\nEnter term number :");
    scanf("%d",&n);
    printf("\nThe value of the term-%d of Fibonacci sequence is %d.",n, fib(n));
    return 0;
}
int fib(int n)
{
    int i,f1=0,f2=1,f;
    if (n==0 || n==1)
        return (n-1);
    else
    {
        for(i=1;i<=n-2; i++)
        {
            f=f1+f2;
            f1=f2;
            f2=f;
        }
        return f;
    }
}
