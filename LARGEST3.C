#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("enter three numbers");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
 {
 if(a>c)
 printf("%d is lagest",a);
 }
 else if (b>a)
 {
 if(b>c)
  printf("%d is largest",b);
 }
 else
 {
 printf("%d is largest",c);
 }
 getch();
}