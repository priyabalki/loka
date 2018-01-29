#include<stdio.h>
#include<conio.h>
void main()
{
long long a;
int count=0;
printf("Enter the integer:");
scanf("%lld",&a);
while (a!=0)
{
a /= 10;
++count;
}
printf("The number of digits:%d",&count);
}



