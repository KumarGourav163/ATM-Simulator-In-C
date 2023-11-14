#include<stdio.h>
#include<windows.h>
void main(){
long x=2000,y;
int z,k,pin,i;
char t='y';
printf("******************** WELCOME TO OUR ATM ********************\n");
printf("\nPlease insert your card and Enter your 4 digit pin = \n");
scanf("%d",&pin);
printf("Please wait\n");
for(i=0;i<5;i++){
printf(" * ");
sleep(1);
}
while(pin!=6789){
if(pin!=6789){
printf("\nPlease enter valid pin \n");
scanf("%d",&pin);
printf("Please wait\n");
for(i=0;i<5;i++){
printf(" * ");
sleep(1);
}
}
}
do{
printf("\n Press [1] for Check amount\n");
printf(" Press [2] for Debit amount\n");
printf(" Press [3] for Credit your balance\n");
printf(" Press [4] for Exit\n");
printf("Please choose your choice = \n");
scanf("%d",&z);
switch(z){
case 1:
printf("Your currect amount is %lu\n",x);
break;
case 2:
printf("\nEnter your Debited amount = \n");
scanf("%lu",&y);
if(y%100!=0){
printf("\nThe ATM has only 100 rupees of notes \n");
}
else if(y>(x-500)){
printf("\nInsufficient balance \n");
   }
else{
x=x-y;
printf("\nYour current balance is %lu \n",x);
}
break;
case 3:
printf("Enter your Credited amount = \n");
       scanf("%lu",&y);
       x=x+y;
       printf("Please wait\n");
       for(i=0;i<5;i++){
   printf(" * ");
   sleep(1);
       }
       printf("\nYour current balance is %lu \n",x);
break;
case 4:
printf("Thank you for using our ATM \n");
break;
default:
printf("Please enter valid choice \n");
}
printf("\nTo try another transaction say yes or no ? (y/n): \n");
fflush(stdin);
scanf("%c",&t);
printf("Please wait\n");
for(i=0;i<5;i++){
printf(" * ");
sleep(1);
}
if(t=='n'|| t=='N'){

k=0;
}
}while(k);
printf("\n******************** Thanks for using our ATM ******************** \n");
}
