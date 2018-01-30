#include<stdio.h>
#include<conio.h>
void main()
{
int b,e,i;
long long pow=1;
printf("Enter a base");
scanf("%d",&b);
printf("enter exponent");
scanf("%d",&e);
for(i=1;i<=e;i++)
{
pow=pow*b;
}
printf("%d^%d=%lld",b,e,pow);
}
getch();
}
