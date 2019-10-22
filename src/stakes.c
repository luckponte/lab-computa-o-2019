#include <stdio.h>
// #include <math.h>

int main()
{
	int x,y,mdc;
	int i=1,aux,z,w;

	while(scanf("%d %d",&x,&y) != EOF)
	{
		if(x == y)
			printf("4\n");
		else
		{
			// Euclides' Algorithm
			w = x;
			z = y;
			while(1)
			{
				if(w%z == 0)
				{
					mdc = z;
					break;
				}
				else
				{
					aux = z;
					z = w%z;
					w = aux;
				}
			}

			printf("%d\n", (((2*x) + (2*y))/mdc) );
		}
	}
}