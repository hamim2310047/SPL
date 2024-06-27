#include<stdio.h>

int main()
{
    int n,j=0,k=0,arr[100],arr_ev[100],arr_odd[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            arr_ev[j]=arr[i];
            j++;
        }
        else
        {
            arr_odd[k]=arr[i];
            k++;
        }
    }
    printf("Even :\n");
    for (int i = 0; i < j; i++)
    {
        printf("%d ",arr_ev[i]);
    }
    printf("\nodd :\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ",arr_odd[i]);
    }
    return 0;
}