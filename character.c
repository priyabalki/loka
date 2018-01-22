#include<stdio.h>
#include<conio.h>
void main()
{
  char l;
  printf("enter the character");
  scanf("%c",&l);
  if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u'||l=='A'||l=='E'||l=='I'||l=='O'||l=='U')
  printf("the given character is vowel");
  else
  printf("the given character is consonant");
  }
