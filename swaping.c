#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number :");
    scanf("%d",&a);
     printf("Enter second number :");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("%d  %d",a,b);

}
