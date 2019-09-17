#include <stdio.h>

int main()
{
	int perc1, perc2;

	while(scanf("%d %d",&perc1,&perc2)!=EOF)
	{
		if(perc2<=2)
			printf("nova\n");
		else if(perc2>=97)
			printf("cheia\n");
		else if(perc2>=perc1)
			printf("crescente\n");
		else
			printf("minguante\n");
	}

}