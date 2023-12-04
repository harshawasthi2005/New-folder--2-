#include<stdio.h>
int main()
{
	int year;
	printf("enter year");
	scanf("%d",&year);
	if(year%400==0||year%4==0&&year%100!=0){
	printf("year leep ");
                          }  
						  else
						  printf("not a leep year");    
}
