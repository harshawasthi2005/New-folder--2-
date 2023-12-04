#include<conio.h>
#include<stdio.h>
void main()
{
	int sml=1,n,j;
	printf("enter any number: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",sml);
		}
		printf("\n");
	}
}
