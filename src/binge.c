#include <stdio.h>

int main()
{
	int episodes;
	float numSeasons,timeEpisode,i,j;
	double totalTime;

	while(scanf("%f %f",&numSeasons,&timeEpisode)!=EOF)
	{
		if(numSeasons==-1 && timeEpisode==-1)
			break;

		totalTime = 0;
		j = numSeasons;

		for (i = 0; i < numSeasons; ++i)
		{
			scanf("%d",&episodes);
			totalTime += episodes*j;

			j -= 1;

			printf("\n%f\n", numSeasons);
		}

		printf("%.0f\n", totalTime*timeEpisode);
	}
}