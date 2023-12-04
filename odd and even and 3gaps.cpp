#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the n");
	scanf("%d",&n);
	
	for(int i=1;i<=3*n+1;i=i+3)
{
	printf("%d\t",i);
}
return 0;

}
