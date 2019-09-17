#include <stdio.h>
#include <stdlib.h>

int main()
{
	int startX,startY,finishX,finishY;
	int i;

	while(scanf("%d %d %d %d",&startX,&startY,&finishX,&finishY)!=EOF)
	{
		printf("%d\n", abs(finishX-startX)+abs(finishY-startY));
	}

}