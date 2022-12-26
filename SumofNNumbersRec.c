#include<stdio.h>

int sum(n)
{
    if(n==1){
        return 1;
    }
    else{
        n+=sum(n-1);
    }
    return n;
}

int main()
{
    int n,s;
    printf("\n Enter a Number: ");
    scanf("%d",&n);
    s=sum(n);
    printf("\n\n Sum of the N numbers is : %d",s);
}
