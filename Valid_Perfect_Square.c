#include<stdio.h>
int main()
{
    int n,x,z,c;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d",&x);
        z=1;
        c=0;
         while(z<1000)
         {
             if(z*z==x)
             {
              c=1;
              printf("True
");
              break;
             }
             else
             {
                 c=0;
             }
             z++;
         }
            if(c==0)
             {
              printf("False
");
             }
        n--;
    }
    
}