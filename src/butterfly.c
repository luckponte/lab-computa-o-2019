#include <stdio.h>

int main()
{
	int matrixSize,i,j,k,l,matrix[200][200],catchCounter,catched[400],x,y,repeated;

	while(scanf("%d",&matrixSize)!=EOF)
	{
		catchCounter = 0;
		// fill the matrix
		for(i=0;i<matrixSize;++i)
		{
			for(j=0;j<matrixSize;++j)
				fscanf(stdin, "%d", &matrix[i][j]);
		}

		for(k=0;k<matrixSize*2;++k)
		{
			repeated=0;
			scanf("%d %d",&x,&y);

			catched[k] = matrix[x-1][y-1];

			for(l=0;l<k;++l)
			{
				if(catched[l]==catched[k])
				{
					repeated = 1;
					break;
				}
			}

			if(repeated==0)
				catchCounter+=1;
		}

		printf("%d\n", catchCounter);
	}
}