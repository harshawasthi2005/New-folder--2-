#include<stdio.h>
int main()
{
	int j,i,num;
	printf("enter the num");
	scanf("%d",&num);
	for(int i=0;i<23;i++)
	{
		for(int j=0;j<i-2;i++)
		{
			printf(" ");
		}
	}
	printf(" *\n");
	return 0;
}
