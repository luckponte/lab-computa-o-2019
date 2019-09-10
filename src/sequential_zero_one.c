#include <stdio.h>
#include <string.h>

int main()
{
	int i=0,counter=1,isDanger=0;
	char input[100];

	fgets(input,100,stdin);

	for(i=0;i<strlen(input);++i)
	{
		if(i==0)
			continue;

		if(counter>=7)
		{
			isDanger = 1;
			break;
		}

		if(input[i] == input[i-1])
			counter += 1;
		else
			counter = 1;

	}

	if(isDanger==0)
		printf("NO\n");
	else
		printf("YES\n");
}