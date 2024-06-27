#include<stdio.h>

int main()
{
    int n,arr[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Unique : \n");
    for (int i = 0; i < n; i++)
    {
        int time=0;
        for (int j = 0; j < n; j++)
        {
            if (i!=j && arr[i]==arr[j])
            {
                time++;
            }
        }
        if (time==0)
        {
            printf("%d ",arr[i]);
        }
        
    }
    
    return 0;
}