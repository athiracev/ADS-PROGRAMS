// program to find the sum of all elements in an array which 
//are at odd position

#include<stdio.h>
#include<conio.h>
int sum(int [],int);
int main()
{
int a[20],n,i;
printf("Enter the range:");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Required sum:%d",sum(a,n));
getch();
return 0;
}
int sum(int a[],int n)
{
int i,s=0;
for(i=0;i<n;i++)
{
if(i%2!=0)
s=s+a[i];
}

return s;
}
