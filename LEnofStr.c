#include<stdio.h>
int main(){
char c[101];
int i=0;
printf("Enter a String: ");
scanf("%s",c);
while(c[i]!='\0')
{
    i++;
}
printf("\nLength of Str : %d\n\n ",i);
}
