#include<stdio.h>
#include<conio.h>
int main()
{
int arr1[50],arr2[50],size1,size2,k,i,merge[100];
clrscr();
printf("Enter no:of elements in 1st array:\t");
scanf("%d",&size1);
printf("\nEnter the elements in 1st array:\n");
for(i=0;i<size1;i++)
{
scanf("%d",&arr1[i]);
merge[i]=arr1[i];
}
k=i;
printf("\nEnter no:of elements in 2nd array:\t");
scanf("%d",&size2);
printf("\nEnter the elements in 2nd array:\n");
for(i=0;i<size2;i++)
{
scanf("%d",&arr2[i]);
merge[k]=arr2[i];
k++;
}
printf("\nThe Merged Array is:\n");
for(i=0;i<k;i++)
{
printf("\t%d",merge[i]);
}
getch();
return 0;
}