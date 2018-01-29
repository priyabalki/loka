#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s=0;
printf("Enter the integer number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=s+i;
}
printf("the sum of %d natural numbers = %d",&n,&s);
}

