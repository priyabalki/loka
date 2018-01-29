#include<stdio.h>
#inlcude<conio.h>
void main()
{
 double a1,a2,a3;
 printf("enter th ethree different number");
 scanf("%lf %lf %lf",&a1,&a2,&a3);
 if(a1>=a2 && a1>=a3)
 printf("%.2f is the largest number",a1);
 else if(a2>=a1 && a2>=a3)
 printf("%.2f is the largest number",a2);
 else if(a3>=a1 && a3>=a2)
 printf("%.2f is the largest number",a3);
 }
 
 
 
