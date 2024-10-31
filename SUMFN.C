#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
int a,b,sum;
clrscr();
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
sum=add(a,b);
printf("Sum=%d",sum);
getch();
}
int add(int x,int y)
{
return(x+y);
}