#include<stdio.h>
int main()
{
	int i,n ,mini;
	printf("enter the number of n");
	scanf("%d",&n);
	int a[n];
	for (i=o;i<n;i++)
	{
		if (a[i]<=mini){
			mini=a[i];
			count=i;
		}
	}
	
	printf("minimum %d at index is %d",mini,count);

	}
