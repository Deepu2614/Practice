#include<stdio.h>

void SimpleInterest(Principal,Rate,Time){
printf("----------------------------------------------------");
printf("\n\nThe Simple Interest is : %d\n\n\n",Principal*(1+(Rate*Time)));
}

int main(){
int Principal,Rate,Time,si;
printf("\nEnter the principal balance : ");
scanf("%d",&Principal);
printf("\nEnter the Annual interest rate : ");
scanf("%d",&Rate);
printf("\nEnter the Time : ");
scanf("%d",&Time);
SimpleInterest(Principal,Rate,Time);
}
