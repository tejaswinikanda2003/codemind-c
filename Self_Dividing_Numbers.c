#include<stdio.h>
int main()
{
    int m,n,i,temp,c,divc,r;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {    c=0;
         divc=0;
         temp=i;
       while(temp)
        {
           r=temp%10;
            c++;
            temp=temp/10;
             if(r==0)
               {
                 break;
               }
               if(i%r==0)
               {
                   divc++;
               }
        }
         if(c==divc)
         {
           printf("%d ",i);
         }
    }
}