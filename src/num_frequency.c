#include <stdio.h>

int main()
{
	int sequenceSize,i,sequence[2000],frequency=1;
	scanf("%d",&sequenceSize);

	for (i = 0; i < sequenceSize; ++i)
	{
		scanf("%d",&sequence[i]);
	}

	int j, aux;
	for (i = 0; i < sequenceSize; ++i) 
    {
        for (j = i + 1; j < sequenceSize; ++j)
        {
            if (sequence[i] > sequence[j]) 
            {
                aux =  sequence[i];
                sequence[i] = sequence[j];
                sequence[j] = aux;
            }
        }
    }

	for (i = 0; i <= sequenceSize; ++i)
	{
		if(i!=0 && sequence[i]==sequence[i-1])
			frequency+=1;

		if(i!=0 && sequence[i]!=sequence[i-1])
		{
			printf("%d aparece %d vez(es)\n",sequence[i-1],frequency);
			frequency = 1;
		}
	}

	return 0;
}
