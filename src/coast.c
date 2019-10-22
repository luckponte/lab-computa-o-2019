#include <stdio.h>
#include <math.h>

int main()
{
	float distance, fugSpeed, grdSpeed;

	while(scanf("%f %f %f",&distance,&fugSpeed,&grdSpeed)!=EOF)
	{
		if(fugSpeed >= grdSpeed)
			printf("N\n");
		else
		{
			distance = sqrt((distance*distance)+144);
			if((12/fugSpeed) < (distance/grdSpeed))
				printf("N\n");
			else
				printf("S\n");
		}
	}
	return 0;
}