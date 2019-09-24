#include <stdio.h>
#include <math.h>

int main()
{
	int testCases, length, cover;
	int i;

	scanf("%d",&testCases);

	for(i=0;i<testCases;++i)
	{
		scanf("%d %d",&length, &cover);

		printf("%d\n", (int)ceil((double)length/(double)cover));
	}
	
	return 0;
}