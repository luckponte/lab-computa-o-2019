#include <stdio.h>

int main()
{
	int a,b,binSum;

	while(scanf("%d %d",&a,&b)!=EOF)
	{
		binSum = (a&~b) | (b&~a);

		printf("%d\n", binSum);
	}

}