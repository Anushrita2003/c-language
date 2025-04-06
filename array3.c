#include<stdio.h>
#include<string.h>
int main()
{
   char arr[30];
   char i;
   printf("Enter the sentence");
   gets(arr);
   for(i=0;i<strlen(arr);i++)
   {
    if(arr[i]>='a' && arr[i]<='z')
    {
      if(i==0)
         printf("%c",(arr[0]-32));
         else 
         printf("%c",arr[i]);
   }
   else
   printf("%c",arr[i]);
   printf(" ");
}
   return 0;
   } 

