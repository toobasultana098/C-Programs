#include  <stdio.h>
int sum(int a[],int n);
int avg(int total,int n);
int main()
{
    int i, num,total,average;
    printf ("Enter the value of N \n");
    scanf("%d", &num);
    int array[num];
    printf("Enter %d numbers (-ve, +ve and zero) \n", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array elements \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
    total=sum(array,num);
    average=avg(total,num);
    printf("\n Sum of all numbers =  %d\n", total);
    printf("\n Average of all input numbers =  %d\n", average);
}
int sum(int array[],int num)
{
    int i,y=0;
    for (i = 0; i < num; i++)
    {
        y=y+array[i];
    }
    return y;
}
int avg(int total,int num)
{
    int x;
    x = total / num;
    return x;
}
