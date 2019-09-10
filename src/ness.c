#include <stdio.h>
#include <math.h>

int main()
{
	int numCases,x,y,total;
	int i;
	scanf("%d",&numCases);

	for(i=0;i<numCases;++i)
	{
		scanf("%d %d",&y,&x);


		if(x%3 == 0)
			x=x/3;
		else
			x = (x-1)/3;

		if(y%3 == 0)
			y=y/3;
		else
			y = (y-1)/3;

		printf("%d\n", (int)(x*y));
	}
}