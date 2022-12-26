#include<stdio.h>
void evenodd(num){
if(num%2==0){
    printf("\n------------------------------------\n\nThe Given number is Even\n\n");
}
else{
    printf("\n------------------------------------\n\nThe Given number is Odd\n\n");
}
}
int main(){
int num;
printf("\n Enter a number: ");
scanf("%d",&num);
evenodd(num);
}
