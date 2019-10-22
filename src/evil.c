#include <stdio.h>

int main()
{
	int cases,lines;
	int i;

	scanf("%d",&cases);

	for(i = 0; i < cases; ++i)
	{
		scanf("%d",&lines);
		printf("%d\n", (lines*(lines+1)/2)+1);
	}
}