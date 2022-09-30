#include<stdio.h>
int fib(n);
int main()
{
    int n;
    printf("\n Enter the number : ");
    scanf("%d",&n);
    printf("\n The value of the term %d of fibonacci series is %d ",n,fib(n));
    return 0;
}
int fib(int n)
{
    int i,f1=0,f2=1,f;
    if (n==0 || n==1)
    {
        printf("%d",n);
    }
    else
    {
        for (i=1;i<=n;i++)
        {
            f=f1+f2;
            f1=f2;
            f2=f;
            printf("%4d",f);
        }
    }
}
