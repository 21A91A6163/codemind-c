#include<stdio.h>
int main()
{
    int arr[100],n,i,d,rev=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        rev=0;
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            rev=rev*10+d;
        }
        if(rev==temp)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
       
    }
    return 0;
}