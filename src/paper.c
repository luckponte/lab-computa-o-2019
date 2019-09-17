#include <stdio.h>

int main()
{
	int numStudents, numPaper, numPerStudent;

	while(scanf("%d %d %d",&numStudents,&numPaper,&numPerStudent)!=EOF)
	{
		if((numStudents*numPerStudent)>numPaper)
			printf("N\n");
		else
			printf("S\n");
	}

}