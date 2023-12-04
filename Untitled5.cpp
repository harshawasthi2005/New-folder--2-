#include<stdio.h>
int main()
{
	int age;
	if(age>=18)
	{
		printf("you are salected to vote ");
		
	}
	int vote;
	if( vote==1)
	{
	  printf("male");
	}
	else{
		printf("female");
	}
	printf("enter the vote");
	scanf("%d",&vote);
	if(vote==1)
	{
		printf("BJP ");
	}
	else if(vote==2){
	
	         printf("SP");
	  }
	  else if(vote==3)
	  {
	  	printf("AM JANTA PARTY");
	  }
	  else if(vote>=4)
	  {
	  	printf("unvailed vote");
	  }
	  else{
	  	printf("you are not salected to vote");
	  }
	  return 0;
}
