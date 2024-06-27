#include<stdio.h>
#include<string.h>

int main()
{
  char str[50]="";
  char str2[50]="";
  gets(str);
  int count=0;
  gets(str2);
  int i=0;
  while (str[i]!='\0')
  {
    if (str[i]==str2[0])
    {
        int j=1;
        while (str2[j]!='\0')
        {
            if (str[i+j]!=str2[j])
            {
                break;
            }
            j++;
        }
        if (j==strlen(str2))
        {
            count++;
        }  
    }
    i++;
  }
  printf("%d",count);
  return 0;
}
