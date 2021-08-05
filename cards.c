#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
 void compute(int limit,char name[4][9],char number[13][6]);
typedef struct{                               //5. define a structure for a card.
    char *value;
    char *type;
}card;

void compute(int limit,char name[4][9],char number[13][6]){
    int i,j=0,count=0;
    
	float answer;
    card c[52];
    card temp;
for(i=0;i<52;i++){                         //6. associating card with the attributes.
    c[i].type=name[i%4];
    c[i].value=number[i%13];
}
 
	srand(time(NULL));                    //7. to generate random values 
	while(j<limit){                       //8. shuffling the deck.
	    j++;
for(i=0;i<52;i++){
int r=(rand() % 52);
    temp= c[i];
	c[i]=c[r];
	c[r]=temp;

	printf("%s %s\n",c[i].type,c[i].value);
}

for(i=0;i<52;i++){
	
    if((c[i].value==number[12])&&(c[i+1].value==number[12]))
	{     //9. counting when atleast two kings appear together.
        count=count+1;
    }
}
 
 
printf("\n\n\n\n");
}
answer=(float)count/limit;											//10. calculating probability.
printf("the probability is: %f",answer);                     
}
 
int main(){
	
	int limit;

    printf("enter the iterations: \n");    		//1. Input from the user.
    scanf("%d",&limit);
	char name[4][9]={{"diamonds"},{"clubs"},{"hearts"},{"spades"}};    //2. 2d array to store card type.
	char number[13][6]={{"ace"},{"two"},{"three"},{"four"},{"five"},{"six"},{"seven"},{"eight"},{"nine"},{"ten"},{"Jack"},{"Queen"},{"King"}};   //3. 2d array to store card value.
   compute(limit,name,number);   //4. call the compute function.
return 0;
}

