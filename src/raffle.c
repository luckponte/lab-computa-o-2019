#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numCases,numStudents,secret,guessedNums[10],best, bestIdx;
	int i,j;
	scanf("%d",&numCases);

	for(i=0;i<numCases;++i)
	{
		best=201;
		scanf("%d %d",&numStudents,&secret);

		for(j=0;j<10;++j)
			guessedNums[j] = 0;

		for (j = 0; j < numStudents; ++j)
			fscanf(stdin,"%d",&guessedNums[j]);

		for(j=0;j<numStudents;++j)
		{
			if(abs(guessedNums[j]-secret)<abs(best-secret))
			{
				best = guessedNums[j];
				bestIdx = j+1;
			}
		}

		printf("%d\n", bestIdx);
	}
}