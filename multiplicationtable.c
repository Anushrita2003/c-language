#include <stdio.h>
int main()
{
int num;
printf("enter a num whose multiplication table has to be printed \n");
scanf("%d",&num);
printf("multiplication table of %d is \n",num);
for(int i=1 ; i<=10 ; i++)
printf("\n %d X %d = %d",num,i,(num*i));

return 0;
}
