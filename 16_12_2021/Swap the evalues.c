#include <stdio.h>
int swap(int a_923,int b_923)
{
    int temp_923;
    temp_923 = a_923;
    a_923 = b_923;
    b_923 = temp_923;
    printf("Swap of two number a = %d and b = %d",a_923,b_923);
    return a_923, b_923;
}

int main()
{
    int a_923,b_923;
    printf("Enter two number : ");
    scanf("%d%d",&a_923,&b_923);
    swap(a_923,b_923);
}
