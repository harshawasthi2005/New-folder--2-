#include<stdio.h>
void main()
{
	int i;
	printf("enter the i");
	scanf("%d",&i);
	while(i<=100)
	{
		i=i+2;
		if(i==54)
		{
			continue;
		}
		printf("\n%d",i);
		
	}
	return 0;
}
