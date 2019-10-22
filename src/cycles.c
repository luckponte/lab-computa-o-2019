#include <stdio.h>
#include <math.h>

int main()
{
	int steps,cycles;
	int i=1;

	while(scanf("%d",&steps) != EOF)
	{
		if(steps==-1)
			break;

		cycles = floor(steps/2);

		printf("Experiment %d: %d full cycle(s)\n", i,cycles);
		++i;
	}
}