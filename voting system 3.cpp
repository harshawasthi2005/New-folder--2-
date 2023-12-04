#include<stdio.h>

#define CANDIDATE_COUNT


#define CANDIDATE1 "Narendra Modi, Bjp"
#define CANDIDATE2 "Rahul Gndhi,Congress"
#define CANDIDATE3 "Kejrival,Aap"
#define CANDIDATE4 "Mayabati,Bsp"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;

void castVote(){
int choice;
        
printf("\n ### Please choose your Candidate for vote ####\n");
printf("\n 1. %s", CANDIDATE1);
printf("\n 2. %s", CANDIDATE2);
printf("\n 3. %s", CANDIDATE3);
printf("\n 4. %s", CANDIDATE4);
printf("\n 5. %s", "None of These");

printf("\n\n Input your choice (1 - 4) : ");
scanf("%d",&choice);

switch(choice){
    case 1: votesCount1++; break;
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: votesCount4++; break;
    case 5: spoiledtvotes++; break;
    default: printf("\n Error: Wrong Choice !! Please retry");
             //hold the screen
             getchar();
}
printf("\n thanks for vote !!");
}

void votesCount(){
printf("\n\n ##### Voting Statics ####");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE1, votesCount2);
printf("\n %s - %d ", CANDIDATE1, votesCount3);
printf("\n %s - %d ", CANDIDATE1, votesCount4);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes); 
}

void getLeadingCandidate(){
    printf("\n\n  #### Leading Candiate ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("[%s]",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s]",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s]",CANDIDATE4);
    else
    printf("----- Warning !!! No-win situation----");    
    
    
    
}

int main()
{
int i;
int choice;

do{
printf("\n ###### Welcome to Election/Voting 2023 #####\n");
int age,count=0;
 char male,choice1,female;
 printf("(m) for male and (f)for female \n enter choice:- ");
 scanf("%c",&choice1);
 if(choice1=='m'){
  printf("please enter your name:- Mr ");
  scanf("%s",&male);
  printf("enter your current age:- ");
  scanf("%d",&age);
  if(age>=18){
   printf("\nelligible for vote.");
   printf("\n1. BJP\n");
   printf("2. CONGRESS\n");
   printf("3. AAP\n");
   printf("4. BSP\n");
   printf("5. NOTA\n ");
     }
  else{
   printf("not elligible for vote.");
   break;
  }
 }
 else if(choice1=='f'){
     printf("please enter your name:- Mrs ");
  scanf("%s",&female);
  printf("enter your current age:- ");
  scanf("%d",&age);
  if(age>=18){
   printf("elligible for vote.");
   printf("\n1. BJP\n");
   printf("2. CONGRESS\n");
   printf("3. AAP\n");
   printf("4. BSP\n");
   printf("5. NOTA\n");
  }
  else{
   printf("not elligible for vote.");
   break;
  }
 }  
 else{
  printf("invalid choice.");
  break;
 }
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf("\n Error: Invalid Choice");
}
}while(choice!=0);

//hold the screen
getchar();

return 0;
}
