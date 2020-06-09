#include<stdio.h>
int main()
{
int n;
printf("Enter a number :");
scanf("%d",&n);
int z;
z=0;
int y=2;
while(y<=n/2)
{
if(n%y==0)
{
z=1;
break;
}
y++;
}
if(z==1)
{
printf(" not prime number");
}
else
{
printf("prime number");
}
return 0;
}
