#include<stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  for (int i = 1; i <=n+1; i++)
  {
    for (int j = 0; j <= n-i; j++)
    {
      printf(" ");
    }
    for (int j = 0; j <= (2*i)-1; j++)
    {
      if(j==1||j==2*i-1)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
      
    }printf("\n");
  }
  for (int i = n; i >=1 ; i--)
  {
    for (int j = 0; j <= n-i; j++)
    {
      printf(" ");
    }
    for (int j = 0; j <= (2*i)-1; j++)
    {
      if(j==1||j==2*i-1)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
return 0;   
}

