#include <stdio.h>
#include <string.h>

int main()
{
	int cases;
	char passwd[20],output[20];
	int i,j;

	scanf("%d",&cases);

	for (i = 0; i < cases; ++i)
	{
		scanf("%s",passwd);

		if(strlen(passwd)<20)
			printf("INVALID DATA\n");
		else
		{
			memset(output, '\0', sizeof(output));

			if(passwd[0]!='R' || passwd[1]!='A')
				printf("INVALID DATA\n");
			else
			{
				for(j=2; j < strlen(passwd); ++j)
				{
					if(passwd[j]!='0')
						break;
				}

				strncpy(output,&passwd[j],(strlen(passwd)-j));

				printf("%s\n", output);
			}
		}
	}
}