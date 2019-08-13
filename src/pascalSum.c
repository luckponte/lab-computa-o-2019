#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int testCases;

	while(scanf("%d",&testCases)!=EOF)
	{
		int i=0;
		while(i<testCases)
		{
			i+=1;
			int sum=0,row,j;

			scanf("%d",&row);

			for (j = 0; j < row; ++j)
			{
				sum += pow(2,j);
			}

			printf("%d\n", sum);
		}
	}

	return 0;
}