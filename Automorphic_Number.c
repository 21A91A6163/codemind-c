#include<stdio.h>
#include<math.h>
int main()
{
    int n,sqr,temp,last,c=0;
    scanf("%d",&n);
    sqr=n*n;
    temp=n;
    while(temp>0)
    {
        c++;
        temp=temp/10;
    }
    int den=floor(pow(10,c));
    last=sqr%den;
    if(last==n)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}