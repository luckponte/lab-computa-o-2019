#include <stdio.h>

int main()
{
	int distance, fugSpeed, grdSpeed;

	while(scanf("%d %d %d",&distance,&fugSpeed,&grdSpeed)!=EOF)
	{
		if(fugSpeed > grdSpeed)
			printf("N\n");
		else
		{
			if((12/fugSpeed) <= (distance/grdSpeed))
				printf("N\n");
			else
				printf("S\n",(12/fugSpeed),(distance/grdSpeed));
		}
	}
	return 0;
}