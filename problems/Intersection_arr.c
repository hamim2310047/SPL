#include<stdio.h>

int main()
{
    int n,a,arr[100],arr1[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
      scanf("%d",&arr1[i]);
    }
    printf("intersection : \n");
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < a; j++)
      {
        if (arr[i]==arr1[j])
        {
          printf("%d ",arr[i]);
        }
      }
    }
    
    return 0;
}
