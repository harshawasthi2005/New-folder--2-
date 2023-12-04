#include<stdio.h>
int main()
{
	int n;
	printf("enter the n");
	scanf("%d",&n);
	if(n%5==0&&n%3==0)
	{
		printf("this is divisible value");
		
	}
	else{
		printf("this is not divisible value");
	}
	return 0;
}
