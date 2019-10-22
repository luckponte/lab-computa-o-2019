#include <stdio.h>

int main()
{
	int cases,balls,divider;
	int j,i,divCount,ballCount;

	scanf("%d",&cases);

	for (i = 0; i < cases; ++i)
	{
		divCount=0;
		ballCount=0;
		scanf("%d",&balls);

		for(j=balls;j>=1;j--)
		{
			divCount=0;
			divider = j;

			while(divider > 0)
			{
				if(j%divider == 0)
					divCount++;
				divider--;
			}

			if(divCount%2==0)
				ballCount++;
		}


		printf("%d\n", ballCount);
	}
}