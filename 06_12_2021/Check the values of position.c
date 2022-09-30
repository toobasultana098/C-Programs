#include<stdio.h>
int SUM_ARRAY(int a[], int n, int nochange);
int main()
{
int a[100], n, i, nochange;
printf("\nEnter how many numbers :");
scanf("%d",&n);
nochange = 999;

printf("\nEnter data for array: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("\nThe sum of the elements of the array is %d", SUM_ARRAY(a, n, nochange));
printf("\n array in the main is");
for(i=0;i<n;i++)
{
    printf("\t %d", a[i]);

}
printf("\n no change value in main %d", nochange);
return 0;
}

int SUM_ARRAY(int a[], int n, int nochange)
{
int i, sum=0;
nochange = 2*nochange;
printf("\n no change value in function %d", nochange);
for(i=0; i<n; i++)
{

	sum=sum + a[i];
	a[i] = 2*a[i];
}
printf("array in the function is");
for(i=0;i<n;i++)
{
    printf("\t %d", a[i]);

}

return sum;
}
