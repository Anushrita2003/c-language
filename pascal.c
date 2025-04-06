#include<stdio.h>
int factorial(int z)
{
    int j=1;
    for (int i=1;i<=z;i++)
    j=j*i;
    return j;

}
int main()
{int n,sp=1;
printf("enter the number of row");
scanf("%d",&n);
 
    for(int i=0;i<=n;i++)
    {
for(int j=0;j<=i;j++)
{    int ncr=factorial(i)/(factorial(j)*factorial(i-j));
    printf("%d",ncr);
    } printf("\n");
sp++;
    }
}