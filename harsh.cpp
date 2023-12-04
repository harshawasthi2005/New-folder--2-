#include<stdio.h>
int main()
{
	int i,n;
	printf("enter size of array :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the %d marks :\n",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
	sum+=a[i]
	}
	printf("%d",sum);
	avg=sum/n;
	per=avg;
	printf("\n average %.2f",avg);
	printf("\npercentage %.2f%%",per);
	
}

