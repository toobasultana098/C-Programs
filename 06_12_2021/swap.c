void swap(int,int);
int main()
{
    int a,b;
    printf("Enter values of a and b\n");
    scanf("%d%d",&a,&b);
    printf("\n\nBefore Swapping : a=%d b=%d",a,b);
    swap(a,b);
    return 0;
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nAfter swapping : a=%d and b=%d\n",x,y);
}
