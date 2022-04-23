#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,k,f=0;
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
           f=1;
           break;
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