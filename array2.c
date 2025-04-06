#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],i;
  int c,count;
    int j=0;
    printf("Enter the word\n");
    gets(a);
   c=strlen(a)-1;
    for(i=0;i<(strlen(a)-1);i++)
    { count=0;
      if(a[j]==a[c])
      {
        count=count+1;
      }
      j++;
      c--;
    }
      if(count>0)
       printf("palindrome");
      else
       printf("not palindrome");
    return 0;
}