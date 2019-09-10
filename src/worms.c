#include <stdio.h>
#include <math.h>
int main()
{
	int width,height,matrix[100][100],sum,bigger;
	int i,j;
	while(scanf("%d %d",&height,&width)!=EOF)
	{
		bigger=0;
		sum=0;

		for(i=0;i<height;++i)
			for(j=0;j<width;++j)
				fscanf(stdin,"%d",&matrix[i][j]);

		for(i=0;i<height;++i)
		{
			for(j=0;j<width;++j)
			{
				sum+=matrix[i][j];
			}

			if(sum>bigger)
				bigger=sum;

			sum=0;
		}

		for(i=0;i<width;++i)
		{
			for(j=0;j<height;++j)
			{
				sum+=matrix[j][i];
			}

			if(sum>bigger)
				bigger=sum;

			sum=0;
		}

		printf("%d\n", bigger);
	}
}