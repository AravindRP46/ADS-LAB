#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
  printf("\n1 : sunday");
  printf("\n2 : monday");
  printf("\n3 : tuesday");
  printf("\n4 : wednesday");
  printf("\n5 : thursday");
  printf("\n6 : friday");
  printf("\n7 : saturday");
 printf("\nenter number of day");
 scanf("%d",&n);
 if(n==1)
 {
 printf("sunday");
  }
  else if(n==2)
  {
  printf("monday");
  }
  else if(n==3)
  {
  printf("tuesday");
  }
  else if(n==4)
  {
  printf("wednesday");
  }
  else if(n==5)
  {
  printf("thursday");
  }
  else if(n==6)
  {
  printf("friday");
  }
  else if(n==7)
  {
  printf("saturday");
  }
  else
  {
  printf("invalid input");
  }
  getch();
}