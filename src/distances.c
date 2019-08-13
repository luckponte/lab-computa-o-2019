#include <stdio.h>
#include <math.h>

float getDistance(int *point1, int *point2)
{
	return sqrt(pow((point2[0]-point1[0]),2) + pow((point2[1]-point1[1]),2));
}

int main(int argc, char const *argv[])
{
	int testCases;

	while(scanf("%d",&testCases)!=EOF)
	{
		int k=0;
		while(k<testCases)
		{
			k+=1;
			int coordinates[51][2],numBalls,i=0,j=0,lesserDistanceIndex;;
			scanf("%d",&numBalls);
			float distances[51];

			while(i<=numBalls)
			{
				scanf("%d %d",&coordinates[i][0],&coordinates[i][1]);
				if(i!=0)
					distances[i] = getDistance(coordinates[i],coordinates[0]);

				i += 1;
			}

			while(j<=numBalls)
			{
				if(j<1)
				{
					j+=1;
					continue;
				}
				else if(j==1)
				{
					j+=1;
					lesserDistanceIndex = 1;
					continue;
				}

				if(distances[j]<distances[j-1])
					lesserDistanceIndex = j;

				j+=1;
			}

			printf("%d\n", lesserDistanceIndex);
		}
	}

	return 0;
}