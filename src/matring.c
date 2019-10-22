#include <stdio.h>
#include <string.h>

int main()
{
	char matrix[4][80],numbers[80][4];
	int msg[78];
	int row,col,length;

	for(row=0;row<4;++row)
		scanf("%s",matrix[row]);

	length = strlen(matrix[0]);

	for(col=0;col<length;++col)
	{
		for(row=0;row<4;++row)
			numbers[col][row] = matrix[row][col];
	}

	for(col=0;col<length;++col)
	{
		// msg[col] = (int)((double)numbers[0]*(double)numbers[col+1]+numbers[length-1])%257;
		printf("%s\n", numbers[col]);
	}

	return 0;
}