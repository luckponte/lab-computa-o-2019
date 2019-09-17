#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int numCountries,gold[500],silver[500],bronze[500],rank[500];
	int i,j,tmp;
	char *countries[500],*tmpStr;

	while(scanf("%d",&numCountries)!=EOF)
	{
		for(i=0;i<500;++i)
		{
			gold[i] = 0;
			silver[i] = 0;
			bronze[i] = 0;
			countries[i] = (char*) malloc (50*sizeof(char));
			rank[i] = i;
		}

		for(i=0;i<numCountries;++i)
		{
			scanf("%s %d %d %d",countries[i],&gold[i],&silver[i],&bronze[i]);
		}

		for (i = 0; i < numCountries-1; ++i)
		{
			for(j=i+1;j<numCountries;++j)
			{
				if(gold[i]<gold[j])
				{
					tmp = gold[j];
					gold[j] = gold[i];
					gold[i] = tmp;
					tmp = silver[j];
					silver[j] = silver[i];
					silver[i] = tmp;
					tmp = bronze[j];
					bronze[j] = bronze[i];
					bronze[i] = tmp;
					tmpStr = countries[j];
					countries[j] = countries[i];
					countries[i] = tmpStr;
				}
				else if(gold[i] == gold[j])
				{
					if(silver[i]<silver[j])
					{
						tmp = gold[j];
						gold[j] = gold[i];
						gold[i] = tmp;
						tmp = silver[j];
						silver[j] = silver[i];
						silver[i] = tmp;
						tmp = bronze[j];
						bronze[j] = bronze[i];
						bronze[i] = tmp;
						tmpStr = countries[j];
						countries[j] = countries[i];
						countries[i] = tmpStr;
					}
					else if(silver[i]==silver[j])
					{
						if(bronze[i]<bronze[j])
						{
							tmp = gold[j];
							gold[j] = gold[i];
							gold[i] = tmp;
							tmp = silver[j];
							silver[j] = silver[i];
							silver[i] = tmp;
							tmp = bronze[j];
							bronze[j] = bronze[i];
							bronze[i] = tmp;
							tmpStr = countries[j];
							countries[j] = countries[i];
							countries[i] = tmpStr;
						}
						else if(bronze[i]==bronze[j])
						{
							if(strcmp(countries[j],countries[i])<0)
							{
								tmp = gold[j];
								gold[j] = gold[i];
								gold[i] = tmp;
								tmp = silver[j];
								silver[j] = silver[i];
								silver[i] = tmp;
								tmp = bronze[j];
								bronze[j] = bronze[i];
								bronze[i] = tmp;
								tmpStr = countries[j];
								countries[j] = countries[i];
								countries[i] = tmpStr;
							}
						}
					}
				}
			}
		}

		for(i=0;i<numCountries;++i)
			printf("%s %d %d %d\n", countries[i],gold[i],silver[i],bronze[i]);
	}

}