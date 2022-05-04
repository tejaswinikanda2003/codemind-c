#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,f=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0&i%2==0)
        {
            f=1;
        }
    }
        if(f==0)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    
}
    