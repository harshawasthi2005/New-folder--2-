#include<stdio.h>

void intdian();
void american();
int main(){
printf("enter the number a");
char ch;
scanf("%c",&ch);
if(ch==0)
{
	printf("namaste");
	}	
	else{
		printf("other");
	}
	return 0;
}
void indian()
{
	printf("namaste\n");
}
void american()
{
	printf("other\n");
}

