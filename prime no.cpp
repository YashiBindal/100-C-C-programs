#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int n= atoi(argv[1]);
	int f=0;
	if(n==1)
	printf("not prime");
	else if(n==2)
	printf("prime");
	else
	{
		for(int i=2;i<=n/2;i++)
			if(n%i==0)
		{
			f=1;
			break;
		}
	}
	if(f==0)
	printf("is prime");
	else
	printf("not prime");
	return 0;
}
