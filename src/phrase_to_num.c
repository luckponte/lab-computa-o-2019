#include <stdio.h>
#include <string.h>

int main()
{
	int i=0;
	char phrase[30],phoneNum[30];

	while(fgets(phrase,30,stdin)!=NULL)
	{
		for (i = 0; i < strlen(phrase); ++i)
		{
			if(phrase[i]=='A'|| phrase[i]=='B'|| phrase[i]=='C')
				phoneNum[i] = '2';
			else if(phrase[i]=='D'|| phrase[i]=='E'|| phrase[i]=='F')
				phoneNum[i] = '3';
			else if(phrase[i]=='G'|| phrase[i]=='H'|| phrase[i]=='I')
				phoneNum[i] = '4';
			else if(phrase[i]=='J'|| phrase[i]=='K'|| phrase[i]=='L')
				phoneNum[i] = '5';
			else if(phrase[i]=='M'|| phrase[i]=='N'|| phrase[i]=='O')
				phoneNum[i] = '6';
			else if(phrase[i]=='P'|| phrase[i]=='Q'|| phrase[i]=='R' || phrase[i]=='S')
				phoneNum[i] = '7';
			else if(phrase[i]=='T'|| phrase[i]=='U'|| phrase[i]=='V')
				phoneNum[i] = '8';
			else if(phrase[i]=='W'|| phrase[i]=='X'|| phrase[i]=='Y'|| phrase[i]=='Z')
				phoneNum[i] = '9';
			else if(phrase[i]=='-'|| phrase[i]=='0'|| phrase[i]=='1')
				phoneNum[i] = phrase[i];
		}

		printf("%s\n", phoneNum);

		for(i = 0; i < strlen(phoneNum); ++i)
			phoneNum[i] = ' ';
	}
}