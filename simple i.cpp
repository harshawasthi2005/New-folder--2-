#include<stdio.h>
int main()
{
	int p,r,t,si;
	printf("enter the principal");
	scanf("%d",&p);
	printf("enter the time ");
	scanf("%d",&t);
	printf("enter the rate");
	scanf("%d",&r);
	si=p*r*t/100;
	printf("%d",si);
	scanf("%d",&si);
	return 0;
}
