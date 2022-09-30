#include <stdio.h>
int gcd(int,int);
int main()
{
    int a,b,g;
    printf("\nEnter two numbers=>");
    scanf("%d%d",&a, &b);
    printf("\nThe GCD of %d and %d is %d\n", a, b, gcd(a,b));
    return 0;
}
int gcd(int a, int b)
{
int t;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    return (a);

}
