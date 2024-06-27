#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[50]="";
    gets(str);
    int L=strlen(str);
    for (int i = 0; i < L; i++)
    {
       if(str[i]>='a'&&str[i]<='z'){
          str[i]=toupper(str[i]);
       }
       else if (str[i]>='A'&&str[i]<='Z')
       {
           str[i]=tolower(str[i]);
       }
       else
       {
          str[i]=str[i];
       }   
    }
    puts(str);
    
    return 0;
}
