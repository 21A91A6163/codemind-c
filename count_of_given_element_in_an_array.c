#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,k,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
    if(k!=arr[i])
    {
        return 0;
    }
}