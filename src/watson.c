#include <stdio.h>

int order(int *array, int size, int *positions)
{
	int i, j, aux;
	for (i = 0; i < size; ++i) 
    {
        for (j = i + 1; j < size; ++j)
        {
            if (array[i] < array[j]) 
            {
                aux =  array[i];
                array[i] = array[j];
                array[j] = aux;

                aux = positions[i];
                positions[i] = positions[j];
                positions[j] = aux;
            }
        }
    }
}

int main()
{
	int numSuspects,suspectRate[1001],positions[1001];
	int i;

	while(scanf("%d",&numSuspects)!=EOF && numSuspects!=0)
	{
		for(i=0;i<1001;++i)
		{
			suspectRate[i] = 0;
			positions[i] = 0;
		}

		for(i=0;i<numSuspects;++i)
			fscanf(stdin,"%d",&suspectRate[i]);

		for(i=0;i<numSuspects;++i)
			positions[i] = i;

		order(suspectRate,numSuspects,positions);

		printf("%d\n", positions[1]+1);
	}
}