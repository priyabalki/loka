#include<stdio.h>
#inlcude<conio.h>
void main()
{
int b,e;
ong long result =1;
printf("Enter the base number");
scanf("%d",&b);
printf("Enter the exponent number");
scanf("%d",&e);
while(e!=0)
{
result *=base;
--e;
}
printf("power of %d = %lld",b,result);
}
