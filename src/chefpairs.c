#include <stdio.h>

int main()
{
	int numTests,arrLen, arr[100000],i,j,k,l,count=0;

	scanf("%d",&numTests);

	for(i=0;i<numTests;i++)
	{
		scanf("%d",&arrLen);

		for(j=0;j<arrLen;j++)
			fscanf(stdin, "%d",&arr[j]);

		for(k=0;k<arrLen;k++)
		{
			for(l=k+1;l<arrLen;l++)
			{
				if(arr[k]%2 == 0 && arr[l]%2 == 1)
					count+=1;
			}
		}

		printf("%d\n",count);

		count=0;
	}
}