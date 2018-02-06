#include<stdio.h>
#include<conio.h>
void main()
{
int num,temp,remainder,reverse_num=0;
printf("Enter the number");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
 remainder=temp%10;
 reverse_num=reverse_num*10+remanider;
 temp/=10;
 }
 if(reverse_num==num)
 printf("Yes");
 else
 printf("No");
 }
