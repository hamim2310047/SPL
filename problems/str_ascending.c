#include<stdio.h>
#include<string.h>

int main(){
  char str[100]="";
  gets(str);
  int temp=0;
  for (int i = 0; i < strlen(str); i++)
  {
    for (int j = i+1; j < strlen(str); j++)
    {
      if (str[i]>str[j])
      {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
      }
    }
    
  }printf("%s ",str);
  return 0;
}
  
  