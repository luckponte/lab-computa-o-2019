#include <stdio.h>

int main(int argc, char const *argv[])
{
	int distance, speed1, speed2,speedDiff;
	float time;

	while(scanf("%d %d %d",&distance,&speed1,&speed2)!=EOF)
	{
		speedDiff = speed1-speed2;

		if(speedDiff<0)
		{
			printf("impossivel\n");
			continue;
		}
		else
		{
			time = (float)distance/(float)speedDiff;
			printf("%.2f\n", time);
		}
	}

	return 0;
}