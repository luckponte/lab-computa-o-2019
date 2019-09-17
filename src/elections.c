#include <stdio.h>

int main()
{
	int numCandidates,tenPerc;
	float votes[10],totalVotes,first;
	int i;

	while(scanf("%d",&numCandidates)!=EOF)
	{
		totalVotes=0;
		for(i=0;i<numCandidates;i++)
		{
			fscanf(stdin,"%f",&votes[i]);
			totalVotes += votes[i];

			if(votes[i]>votes[i-1])
				first=votes[i];
		}

		if(first/totalVotes >= 0.45)
			printf("1\n");
		else if(first/totalVotes>=0.4)
		{
			tenPerc = 1;
			for(i=0;i<numCandidates;i++)
			{
				if(votes[i]==first)
					continue;
				if((votes[i]+0.1*totalVotes)>first)
				{
					tenPerc = 0;
					break;
				}
			}

			if(tenPerc==1)
				printf("1\n");
			else
				printf("2\n");
		}
		else
			printf("2\n");
	}
}