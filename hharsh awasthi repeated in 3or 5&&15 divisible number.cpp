#include<stdio.h>
int main()
{
	int num;
	printf("enter the num");
	scanf("%d",&num);
	if(num%3==0||num%5==0&&num%15!=0)
	{
		printf("this  is divisible number 3or 5but nit a divisiblenumber in 15");
		
	}
	else{
		
		printf("this is not divisible  number");
	}
	return 0;
}
