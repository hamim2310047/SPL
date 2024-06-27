#include<stdio.h>
#include<string.h>

int main()
{
  char str[50]="";
  char str2[50]="";
  gets(str);
  int flag=0;
  int i=0;
  int len=strlen(str);
  for (int i = 0; i < strlen(str); i++)
  {
    str2[i]=str[len-i-1];
  }
  while (str[i]!='\0')
  {
    if (str[i]!=str2[i])
    {
      flag=1;
      break;
    }
    i++;
  }
  if (flag==1)
  {
    printf("no ");
  }
  else 
  {
    printf("yes");
  }
  return 0;
}
