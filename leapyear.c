#include<stdio.h>
#include<conio.h>
void main()
{
 int year;
 scanf("%d",&year);
 if(year%4==0)
 {
 if(year%100==0)
 {
 if(year%400==0)
 {
 printf("the given year is leap year");
 else
 printf("the given year is not a leap year);
}else
printf("the given year is not a leap year);
}
else
