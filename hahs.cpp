//write a prigram to trevers the maxics
#include<stdio.h>
int main()
{
	int m,n;
	printf("enter the row");
	scanf("%d",&m);
	printf("enter the  collom");
	scanf("%d",&n);
	int a[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("enter element at a [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
