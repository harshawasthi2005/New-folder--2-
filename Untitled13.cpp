#include<stdio.h>
#include<conio.h>
int main()
{
int h,m,s;
for(int h=0;h<24;h++){
	for(int m=0;m<60;m++)
	{
		for (int s=0;s<60;s++)
		{
			printf("[%2d:%2d:%2d]",h,m,s);
			Sleep(1000);
		}
	}
}	
}
