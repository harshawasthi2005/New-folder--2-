#include<stdio.h>
int main()
{
	
int num;
printf("enter the num");
scanf("%d",&num);
for(int num=0;num<=12;num++)
{
	if(num%3==0)
	{
		continue;
		
	}
	printf("%d",num);
}
return 0;
}
