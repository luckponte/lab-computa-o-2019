#include <stdio.h>

int order(int *array, int size)
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
            }
        }
    }
}

int main()
{
	int numAttackers,numDefenders,i,offset=0;
	int attackers[11], defenders[11];

	while (scanf("%d %d",&numAttackers,&numDefenders)!=EOF)
	{
		if(numDefenders == 0 && numAttackers == 0)
			break;

		offset = 0;
		for (i = 0; i < numAttackers; ++i)
			fscanf(stdin,"%d",&attackers[i]);

		for (i = 0; i < numDefenders; ++i)
			fscanf(stdin,"%d",&defenders[i]);


		order(defenders,numDefenders);

		for (i = 0; i < numAttackers; ++i)
		{
			if(attackers[i] < defenders[numDefenders-2] || attackers[i] < defenders[numDefenders-1])
			{
				printf("Y\n");
				offset=1;
				break;
			}
		}

		if(offset==0)
			printf("N\n");
	}

	return 0;
}
