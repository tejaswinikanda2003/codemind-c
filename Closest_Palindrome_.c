#include<stdio.h>
int main()
{
	int n,q1,q2,k1,k2,rem1,rem2,res1,res2,pal1,pal2,l,u;
	scanf("%d",&n);
	k1=n-1;
	for(k1;k1>0;k1--)
	{
		q1=k1;
		res1=0;
		while(q1>0)
		{
			rem1=q1%10;
			res1=(res1*10)+rem1;
			q1=q1/10;
		}
		if(res1==k1)
		{
			pal1=k1;
			break;
		}
	}
	k2=n+1;
	for(k2;;k2++)
	{
		q2=k2;
		res2=0;
		while(q2>0)
		{
			rem2=q2%10;
			res2=(res2*10)+rem2;
			q2=q2/10;
		}
		if(res2==k2)
		{
			pal2=k2;
			break;
		}
	}
    l=n-pal1;
    u=pal2-n;
    if(l>u)
    {
    	printf("%d",pal2);
	}
	else if(l==u)
	{
		printf("%d %d",pal1,pal2);
	}
	else
	{
		printf("%d",pal1);
	}
}

