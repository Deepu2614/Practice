#include<stdio.h>
int main()
{
    int n,m,i,min=0,max=0,j,t;
    char num[101];
    printf("Size of arr1 : ");
    scanf("%d",&n);
    printf("Arr1: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    m=n/2;

    for(i=0; i<m-1; i++)
    {
        for(j=0; j<m-1; j++)
        {
            if(num[j]>num[j+1])
            {
                t=num[j];
                num[j]=num[j+1];
                num[j+1]=t;
            }


        }
    }


    for(i=m; i<n-1; i++)
    {
        for(j=m; j<n-1; j++)
        {
            if(num[j]<num[j+1])
            {
                t=num[j];
                num[j]=num[j+1];
                num[j+1]=t;
            }


        }
    }


    for(i=0; i<n; i++)
    {
        printf("%d",num[i]);
    }

}
