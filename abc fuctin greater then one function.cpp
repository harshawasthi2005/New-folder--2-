#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number a");
	scanf("%d",&a);
	printf("enter the number b");
	scanf("%d",&b);
	printf("enter the number c");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("a greater then b,c");
		
		}
		
	if(b>c&&c>a)
	{
		printf("b greater then a,c");
	}
	if(c>a&&c>b){
	
	printf("c greater then a,b");
}

return 0;
}


