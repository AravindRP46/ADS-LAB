#include<stdio.h>
#include<conio.h>
void main()
{
 int arr1[50],arr2[50],size1,size2,i,k,merge[100];
 clrscr();
 printf("enter the size of array 1: ");
 scanf("%d",&size1);
 printf("enter the elemets of array 1: ");
 for(i=0;i<size1;i++)
 {
 scanf("%d",&arr1[i]);
 merge[i]=arr1[i];
 }
 k=i;
 printf("enter the size of array2: ");
 scanf("%d",&size2);
 printf("enter the elements of array 2: ");
 for(i=0;i<size2;i++)
 {
 scanf("%d",&arr2[i]);
 merge[k]=arr2[i];
 k++;
 }
 printf("array elements after merging is:\n");
 for(i=0;i<k;i++)
 {
 printf("\t%d",merge[i]);
 }
 getch();

 }
