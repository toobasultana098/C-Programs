#include <stdio.h>
int countDigits(int num)
{
    int x;
    static int count = 0 ;
    if(num>0)
    {
        x=num%10;
        count=count+x;
        countDigits(num/10);
    }
    else
    {
        return count;
    }
}
int main()
{
    int number;
    int count=0;
    printf("Enter a positive integer number: ");
    scanf("%d",&number);
    count=countDigits(number);
    printf("Total digits in number %d is: %d\n", number,count);
    return 0;
}
