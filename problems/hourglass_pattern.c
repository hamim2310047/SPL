#include<stdio.h>

int main() { 
  int n;
  scanf("%d",&n);
  for (int i = n; i >=(n/2); i--)
  {
    for (int j = 1; j <= n-i; j++)
    {
        printf(" ");
    }
    
    for (int j = 1; j <= i; j++)
    {
        printf("* ");
    }
    printf("\n");
  }
  for (int i = ((n/2)-1); i <=n; i++)
  {
    for (int j = 1; j <= n-i; j++)
    {
        printf(" ");
    }
    
    for (int j = 1; j <= i; j++)
    {
        printf("* ");
    }
    printf("\n");
  }

  
return 0;   
}

