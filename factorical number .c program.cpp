#include<stdio.h>
int main()
{
	int n,f=1,i;
	printf("enter the n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
		
	}
	printf("fatorical number %d",n);
	return 0;
}
