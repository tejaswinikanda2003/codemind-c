#include<stdio.h>
int main()
{
int i,n,sum=0;
	scanf("%d",&n);//med perfect num
	for(i=1;i<n;i++)
	{
	 if (n%i==0)
	 {
	 sum+=i;
	 }
	}
	if(sum==n)
	{
	    printf("True");
	}
	else
	{
	    printf("False");
	}
}


