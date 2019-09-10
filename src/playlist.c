#include <stdio.h>

int main()
{
	int albumSize,playSize,cases=0,songLen[100],playOrder[1000],isUnique,uniqueCount,time;
	int i,j,k;

	while(scanf("%d %d",&albumSize,&playSize)!=EOF && cases<150)
	{
		cases+=1;
		time=0;
		uniqueCount=0;

		for(i=0;i<100;++i)
			songLen[i] = 0;

		for(i=0;i<1000;++i)
			playOrder[i] = 0;

		for(i=0;i<albumSize;++i)
			fscanf(stdin,"%d",&songLen[i]);

		for(i=0;i<playSize;++i)
			fscanf(stdin,"%d",&playOrder[i]);

		for(i=0;i<playSize;++i)
		{
			isUnique=1;

			for(k=0;k<i;++k)
			{
				if(playOrder[i]==playOrder[k])
				{
					isUnique = 0;
					break;
				}
			}

			if(isUnique==1 && songLen[playOrder[k]-1])
				uniqueCount+=1;

			if(uniqueCount==albumSize)
			{
				for(j=0;j<=k;++j)
					time += songLen[playOrder[j]-1];

				break;
			}
		}

		if(uniqueCount!=albumSize)
			printf("-1\n");
		else
			printf("%d\n", time);
	}
}