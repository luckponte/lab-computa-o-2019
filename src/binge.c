#include <stdio.h>

int main()
{
	int numSeasons, timeEpisode, episodes[100000];
	double totalTime;
	int i,j;

	while(scanf("%d %d",&numSeasons,&timeEpisode)!=EOF)
	{
		if(numSeasons==-1 && timeEpisode==-1)
			break;

		totalTime = 0;
		j = numSeasons;

		for (i = 0; i < numSeasons; ++i)
		{
			fscanf(stdin,"%d",&episodes[i]);
			totalTime += episodes[i]*j*timeEpisode;

			j -= 1;
		}

		printf("%f\n", totalTime);
	}
	return 0;
}