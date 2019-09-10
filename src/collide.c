#include <stdio.h>

int main()
{
	int numCases,aX,aY,bX,bY,cX,cY,dX,dY,rX,rY;
	int i;
	
	while(scanf("%d",&numCases)!=EOF)
	{
		for(i=0;i<numCases;++i)
		{
			scanf("%d %d %d %d %d %d %d %d %d %d",&aX,&aY,&bX,&bY,&cX,&cY,&dX,&dY,&rX,&rY);

			if((rX>=dX && rX<=bX && rY<=dY && rY>=bY))
				printf("1\n");
			else
				printf("0\n");
		}
	}

}