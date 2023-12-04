#include<stdio.h>
int main()
{
	
	int age;
	printf("enter age");
	scanf("%d",&age);
	if(age>18){
		printf("adult\n");
		
	}
	else if(age>=13){
		printf("child\n");
	}
	printf("baby\n");
	return 0;
}
