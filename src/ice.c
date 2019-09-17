#include <stdio.h>

int main()
{
	int rowNumber,jumpCount,thinCounter;
	int i,impossible;
	char rows[101][10];

	while(scanf("%d",&rowNumber)!=EOF)
	{
		jumpCount = 0;
		thinCounter = 0;
		impossible=0;

		for (i = 0; i < rowNumber; ++i)
		{
			fgets(rows[i],11,stdin);

			if(rows[i][0] == '\n')
				fgets(rows[i],11,stdin);

			if(rows[i][0] == '-')
			{
				thinCounter = 0;
				if(rows[i-1][0] == '.')
					jumpCount += 1;
			}

			if(i==rowNumber-1 && rows[i][0]=='.')
				jumpCount+=1;

			if(rows[i][0]=='.')
				thinCounter += 1;

			if(thinCounter > 2)
				impossible=1;
		}

		if(impossible==1)
			printf("N\n");
		else
			printf("%d\n", jumpCount);
	}

}