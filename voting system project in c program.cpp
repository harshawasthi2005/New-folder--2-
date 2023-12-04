#include <stdio.h>

int main()
{
	int n,age;
	printf("enter the n");
	scanf("%d",&n);
////	printf("enter the age");
//	scanf("%d",&age);
	for(int i=1;i<=n;i++)
	{
	   	printf("enter the age");
	scanf("%d",&age);
	if(age>=18)
{
    {
		printf("you are salected to vote ");
		
	}
	int gender;
	printf("\nenter the gender ");
	scanf("%d",&gender);
	int vote;
	if( vote==1)
	{
	  printf("male");	}
	else{
	printf("female");
	}
	int party;
	printf("\nenter the party");
	scanf("%d",&party);
	if(party==1)
	{
		printf("\nBJP\n ");
	}
	else if(party==2){
	
	        printf("\nSP\n");
	  }
	  else if(party==3)
	 {
	 	printf("\nAM JANTA PARTY\n");
	  }
	  else if(party>=4)
	  { 	printf("\ninvailed vote\n");
	 }
        }
	 else{
	  	printf("\nyou are not salected to vote");
	 }
	}
	  return 0;
}

