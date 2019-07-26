#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	if(argc<3)
	{
		printf("provide value for both:");
	}
	else
	{
		int base= atoi(argv[1]);
		int height= atoi(argv[2]);
		float area=0.5*base*height;
		printf("%.2f",area);
	}
	return 0;
}

