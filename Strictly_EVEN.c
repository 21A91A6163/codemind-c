#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==1 && arr[i]%2==0)
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
   
}