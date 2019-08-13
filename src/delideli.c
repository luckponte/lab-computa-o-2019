#include <stdio.h>
#include <string.h>

int checkIrregulars(int numIrregulars, char *irregulars,char *word)
{
	int i;
	for (i = 0; i < numIrregulars; ++i)
	{
		if(strcmp(irregulars[i][0],word)==0)
			return i;
	}
	return -1;
}

char *strReplace(char *orig, char *rep, char *with)
{
    char *result; // the return string
    char *ins;    // the next insert point
    char *tmp;    // varies
    int len_rep;  // length of rep (the string to remove)
    int len_with; // length of with (the string to replace rep with)
    int len_front; // distance between rep and end of last rep
    int count;    // number of replacements

    // sanity checks and initialization
    if (!orig || !rep)
        return NULL;
    len_rep = strlen(rep);
    if (len_rep == 0)
        return NULL; // empty rep causes infinite loop during count
    if (!with)
        with = "";
    len_with = strlen(with);

    // count the number of replacements needed
    ins = orig;
    for (count = 0; tmp = strstr(ins, rep); ++count) {
        ins = tmp + len_rep;
    }

    tmp = result = malloc(strlen(orig) + (len_with - len_rep) * count + 1);

    if (!result)
        return NULL;

    // first time through the loop, all the variable are set correctly
    // from here on,
    //    tmp points to the end of the result string
    //    ins points to the next occurrence of rep in orig
    //    orig points to the remainder of orig after "end of rep"
    while (count--) {
        ins = strstr(orig, rep);
        len_front = ins - orig;
        tmp = strncpy(tmp, orig, len_front) + len_front;
        tmp = strcpy(tmp, with) + len_with;
        orig += len_front + len_rep; // move to next "end of rep"
    }
    strcpy(tmp, orig);
    return result;
}

int main(int argc, char const *argv[])
{
	int numIrregulars, numWords,i,irregularIdx,wordLen;
	char *irregulars[20][2],word;

	while(scanf("%d %d",&numIrregulars,&numWords)!=EOF)
	{
		for (i = 0; i < numIrregulars; ++i)
			scanf("%s %s",&irregulars[i][0],&irregulars[i][1]);

		for (i = 0; i < numWords; ++i)
		{
			scanf("%s",&word);

			irregularIdx = checkIrregulars(numIrregulars,irregulars,word)
			if(irregularIdx!=-1)
			{
				printf("%s\n", irregulars[irregularIdx][1]);
				continue;
			}

			wordLen = strlen(word);

			if(word[wordLen]=='y')
			{
				word = strReplace(word,'y','ies');
				continue;
			}
		}
		
	}

	return 0;
}