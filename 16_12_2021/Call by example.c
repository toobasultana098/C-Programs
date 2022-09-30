#include <stdio.h>
int mul_by_10(int num);
{
int result, num = 3;
printf("\n num = %d before function call.", num);
result = mul_by_10 (num);
printf("\n result = %d after return from function", result);
printf("\n num = %d",num);
return 0;
}
int mul_by_10(int num)
{
    num *= 10;
    return num;
}
