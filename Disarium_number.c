#include<stdio.h>
#include<math.h>
int len(int n)
{
    int c=0;
    while(n!=0)
    {
        c++;
        n=n/10;
    }
    return c;
}
int dis(int n)
{
    int d,l,num,s=0;
    num=n;
    l=len(n);
    while(num>0)
    {
        d=num%10;
        s=s+pow(d,l);
        num=num/10;
        l--;
    }
    if(s==n)
    {
        return 1;
    }
    else
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(dis(n))
    {
        printf("True");
    }
    else{
        printf("False");
    }
}