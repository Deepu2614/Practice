#include<stdio.h>
int main(){
int n,m,i;
char num[101];
printf("Size of arr1 : ");
scanf("%d",&n);
printf("Arr1: ");
for(i=0;i<n;i++){
scanf("%d",&num[i]);
}
printf("Size of arr2: ");
scanf("%d",&m);
printf("Arr2: ");
for(i=n;i<n+m;i++){
scanf("%d",&num[i]);
}
for(i=0;i<(n+m);i++){
printf("%d",num[i]);
}
}
