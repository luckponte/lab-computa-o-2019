#include <stdio.h>

int main()
{
	int samples;

	while (scanf("%d",&samples)!=EOF && samples != 0)
	{
		int i,current,previous,first,firstSlope=0,peaks=0,slopeFlag=0;

		for (i = 0; i <= samples; ++i)
		{
			if(i == samples)
			{
				previous = current;
				current = first;
			}
			else
				fscanf(stdin,"%d",&current);

			if(i == 0)
			{
				first = current;
				previous = current;
				continue;
			}


			if(current>previous)
			{
				if(slopeFlag!=1 && !(i == samples && firstSlope==1))
					peaks+=1;

				slopeFlag = 1;

				if(i == 1)
					firstSlope = slopeFlag;
			}
			else if(current<previous)
			{
				if(slopeFlag!=-1 && !(i == samples && firstSlope==-1))
					peaks+=1;

				slopeFlag = -1;

				if(i == 1)
					firstSlope = slopeFlag;
			}

			previous = current;
		}

		printf("%d\n",peaks);
	}

	return 0;
}
