#include<stdio.h>
#include<string.h>

int main()
{
  char str[50]="";
  gets(str);
  for (int i = 0; i < strlen(str); i++)
  {
    for (int j = i+1; j < strlen(str); j++)
    {
      if (str[i]==str[j])
      {
        for (int k = j; k < strlen(str); k++)
        {
          str[k]=str[k+1];
        }
      }
    }
  }
  puts(str);
  return 0;
}
