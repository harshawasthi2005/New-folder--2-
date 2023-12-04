#include<stdio.h>
int main()
{
int age;
printf("enter the age");
scanf("%d",&age);
int vote;
printf("enter the vote");
scanf("%d",&vote);
if(age>=18)
{
	printf("you are salected to given in your parties vote");
	
}
else{
	printf("sorry!you are not given the vote because you are not 18 years old");
	
}

if(vote==1)
{
	printf("\nBJP party");
	
}
if(vote==2)
{
	printf("\nSP party");
}
if(vote==3)
{
	printf("\najp party");
}
else{
	printf("\ninvailed vote");
}
return 0;

}
