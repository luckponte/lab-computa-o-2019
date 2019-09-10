#include <stdio.h>

int getSequenceSize(int num)
{
	int counter=1;

	while(num != 1)
	{
		if(num%2==0)
			num = num/2;
		else
			num = (3*num)+1;

		counter+=1;
	}

	return counter;
}

int main()
{
	int minLimit,maxLimit,i,max=0,size;

	while(scanf("%d %d",&minLimit,&maxLimit)!=EOF)
	{
		for(i=minLimit;i<maxLimit;++i)
		{
			size = getSequenceSize(i);

			if(max<size)
				max = size;
		}

		printf("%d %d %d\n", minLimit, maxLimit, max);
	}

}