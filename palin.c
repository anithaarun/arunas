#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev int=0,rem,org int;
printf("enter the integer");
scanf("d",&n);
org int=n;
while(n!=0)
{
rem=n%10;
rev int=rev int*10+rem;
n/=10;
}
if(org int==rev int)
{
printf("%d is palindrome",org int);
}
else
{
printf("%d is not palindrome",org int);
}
getch();
}
