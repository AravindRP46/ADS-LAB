#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("enter two numbers");
 scanf("%d%d",&a,&b);
 if(a>b)
 {
 printf("%d is lagest",a);
 }
 else
 {
  printf("%d is largest",b);
 }
 getch();
}