#include <stdio.h>

int main()
{
	int numCells,cells[50],bombGrid[50];
	int i;

	while(scanf("%d",&numCells)!=EOF)
	{
		for(i=0;i<50;++i)
		{
			cells[i] = 0;
			bombGrid[i] = 0;
		}

		for(i=0;i<numCells;++i)
		{
			scanf("%d",&cells[i]);
			bombGrid[i] = cells[i];
		}

		for(i=0;i<numCells;++i)
		{
			if(i>0)
				bombGrid[i] += cells[i-1];

			if(i<numCells-1)
				bombGrid[i] += cells[i+1];
		}

		for(i=0;i<numCells;++i)
			printf("%d\n", bombGrid[i]);
	}

}