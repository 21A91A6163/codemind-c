#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,sum=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    k=n-1;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i]*pow(2,k);
        k--;
    }
    printf("%d",sum);
    
}
