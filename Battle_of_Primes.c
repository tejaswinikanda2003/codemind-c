#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=2;i<(n/2)+1;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        return 1;
    }
    else
    {
    	return 0;
	}
}
int main()
{
    int n1,n2,m,i;
    scanf("%d%d",&n1,&n2);
    m=n1+n2;
    for(i=1;i<m;i++)
    {
        if(prime(m+i))
        {
            printf("%d",i);
            break;
        }
        
    }
}