#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

int main(){
  char str1[50]="";
  char str2[50]="";
  gets(str1);
  int i=0;
  int len= strlen(str1);
  while (str1[i]!='\0')
  {
    str2[i]=str1[len-i-1];
    i++;
  }
  puts(str2);
  return 0;
}
