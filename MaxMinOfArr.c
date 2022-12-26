#include<stdio.h>
int main(){
int n,i,min,max;
char num[101];
printf("Size of arr : ");
scanf("%d",&n);
printf("Array elements : \n");
for(i=0;i<n;i++){
scanf("%d",&num[i]);
}
min=num[0];
max=num[0];
for(i=1;i<n;i++){
    if(min>num[i]){
        min=num[i];
    }
}
for(i=1;i<n;i++){
    if(max<num[i]){
        max=num[i];
    }
}

printf("\nMinimum element : %d\n",min);
printf("\nMaximum element : %d\n",max);
}
