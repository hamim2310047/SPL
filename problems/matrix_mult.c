#include<stdio.h>
int main()
{
  int r1,c1,r2,c2,a[50][50],b[50][50],c[50][50];
  scanf("%d %d",&r1,&c1);
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  scanf("%d %d",&r2,&c2);
  for (int i = 0; i < r2; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  if (c2!=r1)
  {
    printf(" Multiplication is not possible\n");
  }
  else
  {
    for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < r2; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      printf("%d ",b[i][j]);
    }
    printf("\n");
  }
  int sum;
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      sum=0;
      c[i][j]=0;
      for (int k = 0; k < c1; k++)
      {
        sum+=a[i][k]*b[k][j];
        c[i][j]=sum;
      }
    }
  }
  }
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      printf("%d ",c[i][j]);
    }
    printf("\n");
  }
  return 0;
}
  