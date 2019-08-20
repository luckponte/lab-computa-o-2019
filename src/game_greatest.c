#include <stdio.h>

int main()
{
	int rounds,player1,player2,val1,val2,i;
	int score[2];

	while (scanf("%d",&rounds)!=EOF && rounds != 0)
	{
		player1=0;
		player2=0;

		for (i = 0; i < rounds; ++i)
		{
			scanf("%d %d",&val1,&val2);
			if(val1>val2)
				player1 += 1;
			else if(val2>val1)
				player2 += 1;
		}

		printf("%d %d\n", player1, player2);
	}

	return 0;
}
