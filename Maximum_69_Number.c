#include<stdio.h>
int main()
{
    int arr[10],n,t[10],i=0,j,d=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        arr[i++]=r;
        d++;
    }
    i--;
    for(j=0;i>=0;i--)
    {
        t[j++]=arr[i];
    }
    for(i=0;i<d;i++)
    {
        if(t[i]==6)
        {
            t[i]=9;break;
    }
    }
    for(i=0;i<d;i++)
    {
        printf("%d",t[i]);
    }
    return 0;
}