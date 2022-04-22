#include<stdio.h>
int main()
{
    int n,n2,i,gcd;
    scanf("%d%d",&n,&n2);
    for(i=1;i<=n&&i<=n2;i++)
    {
        if(n%i==0&&n2%i==0)
        {
            
        gcd=i;
        }
    }
    printf("%d",gcd);
}