#include<stdio.h>
#include<string.h>

int main()
{
  char str[50]="";
  char str2[50]="";
  gets(str);
  int sum=0;
  int i=0;
  int len=strlen(str);
  while (str[i]!='\0')
  {
    if (str[i]>='0'&&str[i]<='9')
    {
      sum+=str[i]-'0';
    }
    i++;
  }
  printf("%d",sum);
  return 0;
}
