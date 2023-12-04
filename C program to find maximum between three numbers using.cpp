//C program to find maximum between three numbers using
//conditional operator AND Ternary Operator
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("a maximun then b,c");
	}
	if(b>a&&b>c)
	{
		printf("b maximum then a,c");
	}
	if(c>a&&c>b)
	{
		printf("c maximum then a,b");
	}
	return 0;
}
