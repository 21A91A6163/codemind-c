#include<stdio.h>
int main()
{
	int n,prime=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			prime++;
		}
    }
	if(prime==2)
	{
		printf("prime");
	}
	else
	{
		printf("not a prime");
	}
	return 0;
}