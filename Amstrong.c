#include<stdio.h>
int main(){
int n,t,s=0,r;
printf("Enter a Number : ");
scanf("%d",&n);
t=n;
while(t!=0){
    r=t%10;
    s+=r*r*r;
    t=t/10;
}
if(s==n){
    printf("\n----------------------\nAmstrong\n\n");
}
else{
     printf("\n----------------------\nNot Amstrong\n\n");
}
}
