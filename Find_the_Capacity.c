#include<stdio.h>
int main()
{
    int s,t,b,ca;
    scanf("%d%d%d",&s,&t,&b);
    ca=(2*s*b*t*512)/1024;
    printf("%dKB",ca);
}