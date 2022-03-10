//fibonacci upto a range

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,n;

printf("\nEnter range:");
scanf("%d",&n);
a=0,b=1,c=0;
printf("%d \t %d",a,b);
c=a+b;
while(c<=n)
{
printf("\t%d",c);
a=b;
b=c;
c=a+b;
}
getch();
}
