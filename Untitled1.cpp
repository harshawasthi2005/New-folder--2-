// C program to perform all arithmetic operations
#include<stdio.h>
int main()
{
	int a,b;
	int sum,sub,mul;
	float div;
	printf("enter the a and b");
	scanf("%d%d",&a,&b);
	sum =a+b;
	sub=a-b;
	mul=a*b;
	div=a%b;
	printf("%d",sum);
	printf("%d",sub);
	printf("%d",mul);
	printf("%f",div);
	return 0;

}
