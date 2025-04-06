#include <stdio.h>
int main()
{
    int a=0,n,fibbo;
    int b=1;
     printf("enter the end number");
    scanf("%d",&n);
    printf("%d \t ",a);
    printf("%d \t ",b);
    for(int i=2;i<=n;i++)
    {
       fibbo=a+b;
       a=b;
       b=fibbo;
       printf("%d \t ",fibbo);
    }


}
