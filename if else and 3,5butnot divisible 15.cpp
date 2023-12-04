#include<stdio.h>
int main()
{
	int n;
	printf("enter the n");
	scanf("%d",&n);
	if(n%3==0||n%5==0&&n%15!=0)
	{
		printf("this is divisible to3and5 but not divisible 15");
	}
	else
	{
		printf("this is not divisible num");;
	}
	return 0;
}
