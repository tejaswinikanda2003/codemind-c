#include<stdio.h>
int main()
{
    int n,r,i=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;
        i++;
    }
}