#include<stdio.h>
int main()
{
    int n,pro=1,sum=0,d;
    scanf("%d",&n);
    pro=n*n;
    while(pro>0)
    {
        d=pro%10;
        sum=sum+d;
        pro=pro/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}