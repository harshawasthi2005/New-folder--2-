#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the %d elements:\n",i);
		scanf("%d",&a[i]);
		{
			for(i=0;i<n;i++)
			printf("%d",a[i]);
		}
		
	}
}
