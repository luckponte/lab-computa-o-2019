#include <stdio.h>
#include <string.h>

int main()
{
	int wordCount=0,count=0,count2=0,count3=0,i,j;
	char word[5];
	scanf("%d",&wordCount);
	char one[3] ={ "one"};
	char two[3] = {"two"};
	char three[5] = {"three"};

	for(i=0;i<wordCount+1;++i) {

		fgets(word,5,stdin);
		
		for(j=0;j<strlen(word);++j) {
			if(word[j]==one[j]) {
				count++;
			}
			if(word[j]==two[j]) {
				count2++;
			}
			if(word[j]==three[j]) {
				count3++;
			}
		}
		if(count>=2)
			printf("1\n");
		else if (count2>=2)
			printf("2\n");
		else if (count3>=2)
			printf("3\n");
		count=0;count2=0;
	}

}