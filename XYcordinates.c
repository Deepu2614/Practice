#include<stdio.h>

void Quadrant(X,Y){
    printf("\n-----------------------------------");
(X>0)?((Y>0)?printf("\n\n First Quadrant"):printf("\n\n Fourth Quadrant")):((Y>0)?printf("\n\n Second Quadrant"):printf("\n\n Third Quadrant"));
printf("\n\n\n");
}

int main(){
int X,Y;
printf("\n Enter X Coordinates: ");
scanf("%d",&X);
printf("\n Enter Y Coordinates: ");
scanf("%d",&Y);
Quadrant(X,Y);
}
