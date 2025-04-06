#include<stdio.h>
int main()
{
  int a[100],i;
    printf("Enter the numbers inside the array");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=4;i>=0;i--)
    {
    printf("%d",a[i]);
    printf("\n");
    }
    
    return 0;
}