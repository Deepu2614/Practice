#include<stdio.h>

int sum(n)
{
   int s=0;
    if(n==0){
        return 0;
    }
    else{
        s=(n%10)+sum(n/10);
    }
    return s;
}

int main()
{
    int n,s;
    printf("\n Enter a Number: ");
    scanf("%d",&n);
    s=sum(n);
    printf("\n\n Sum of the digits of the Number using Recursive Function is : %d\n\n",s);
}
