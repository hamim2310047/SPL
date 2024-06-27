#include<stdio.h>

int main() {
  int arr[100],n,count;
  scanf("%d",&n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
  int max=arr[0];
  int min=arr[0];
  for (int i = 0; i < n; i++)
  {
    if (arr[i]>max)
    {
      max=arr[i];
    }
    else if (min>arr[i])
    {
      min=arr[i];
    }
  }
  for (int i = min; i <= max; i++)
  {
    count=0;
    for (int j = 0; j < n; j++)
    {
      if (arr[j]==i)
      {
        count++;
      }
    }
    if (count!=0)
    {
      printf("%d=%d times\n",i,count);
    } 
  }
return 0;   
}

