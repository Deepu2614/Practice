#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned long long int B,F,G=0,rem,i=0;
    int D=0;
    char S[101];
    scanf("%s",S);
    B=atoi(S);
    printf("%llu\n\n",B);
    while(B>1000)
    {
        F=B%10000;
    if(F>G)
    {
        G=F;
    }
    B=B/10;
    }
    //printf("\n%llu",G);
    while(G>0)
    {
        rem=G%10;
        G=G/10;
        D+=rem*pow(2,i);
        ++i;
    }
    printf("\n%d",D);
    return 0;
}
