#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,sum=0,k,f;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    k=sum/n;
    i=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            f=1;
        }
    }
    if(f==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    
}