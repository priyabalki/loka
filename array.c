#include<stdio.h>
#define MAX 100
int main()
{
int i,l,a;
int arr[MAX];
int sum=0;
printf("Enter the size of array");
scanf("%d",&a);
printf("enter the value of l");
scanf("%d",&l);
for(i=0;i<a;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<l;i++)
{
sum=sum+arr[i];
}
return 0;
}
