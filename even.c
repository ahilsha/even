#include<stdio.h>
#include<conio.h>
int main()
{
int a;
clrscr();
printf("Enter a Number");
scanf("%d",&a);
if(a%2==0)
printf("%d is a Even Number",a);
else
printf("%d is a Odd Number",a);
getch();
return 0;
}
