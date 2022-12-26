#include<stdio.h>
int main(){
int n,num,r,rev=0,i=0;
printf("\n Enter a Number: ");
scanf("%d",&n);
num=n;
while(n>0){
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
printf("\nReverse number is : %d",rev);
if(rev==num){
    printf("\n------------------------\n\nPalindrome\n\n");
}
else{
    printf("\n------------------------\n\nNot Palindrome\n\n");
}
}
