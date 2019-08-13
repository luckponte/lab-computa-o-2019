#include <stdio.h>

int isBlackListed(int num,int *blacklist)
{
	int i;
	for (i = 0; i < 100; ++i)
	{
		if(num == blacklist[i])
			return 1;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	int totalQuestions, faqFrequency;
	int i,j,k,repeated,counter;
	int questions[1000],blacklist[100];

	while(scanf("%d %d",&totalQuestions,&faqFrequency)!=EOF)
	{
		if (totalQuestions == 0 && faqFrequency == 0)
			break;

		repeated=0;
		for (i = 0; i < totalQuestions; ++i)
			fscanf(stdin, "%d", &questions[i]);

		for(j = 0; j<totalQuestions ; ++j)
		{
			counter = 0;
			if(questions[j] && isBlackListed(questions[j],blacklist) == 1)
				continue;
			for(k = j; k<totalQuestions; ++k)
			{
				if(questions[k] == questions[j])
				{
					// printf("k: %d, j: %d - qk: %d, qJ: %d\n",k,j,questions[k],questions[j]);
					counter += 1;
				}
				else
					// printf("k: %d, j: %d - qk: %d, qJ: %d\n",k,j,questions[k],questions[j]);

				if(counter>=faqFrequency)
				{
					blacklist[k] = questions[k];
					break;
				}
			}

			printf("QUESTION: %d\n COUNTERS: %d\n",questions[j],counter);

			if(counter>=faqFrequency)
				repeated+=1;
		}

		printf("%d\n", repeated);

		for(i = 0; i< 100; ++i)
			blacklist[i] = NULL;
	}

	return 0;
}