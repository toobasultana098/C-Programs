#include <stdio.h>
int factorial(int i){
    if(i <= 1)
    {
        return 1;
    }
    return i * factorial(i - 1);
}
int main(){
    int i;
    printf("enter the number");
    scanf("%d",&i);
    printf("factorial of %d is %d\n",i,factorial(i));
}
