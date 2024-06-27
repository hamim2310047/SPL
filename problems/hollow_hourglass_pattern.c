#include<stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  for (int i = n; i >=n/2 ; i--)
  {
    for (int j = 1; j <= n-i; j++)
    {
      printf(" ");
    }
    for (int j = 1; j <= 2*i-1; j++)
    {
     if (i==n||j==1||j==2*i-1)
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
  for (int i = (n/2-1); i <=n ; i++)
  {
    for (int j = 1; j <= n-i; j++)
    {
      printf(" ");
    }
    for (int j = 1; j <= 2*i-1; j++)
    {
      if (i==n||j==1||j==2*i-1)
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

