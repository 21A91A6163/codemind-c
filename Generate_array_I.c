#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(j=1;j<=arr[i+1];j++)
            {
                printf("%d ",arr[i]);
            }
        }
    }
    return 0;
}