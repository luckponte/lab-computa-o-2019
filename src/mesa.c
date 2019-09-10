#include <stdio.h>
#include <string.h>

int main()
{
	int numret=0,x1,x2,y1,y2,i,j,k,cont=0;
	
	scanf("%d",&numret);
	int mesa[100][100];


	for(i=0;i<100;i++) {
		for(j=0;j<100;j++) {
			mesa[i][j]=0;
		}
	}

	for(i=0;i<numret;++i) {

		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		x1=x1-1;
		x2=x2-1;
		y1=y1-1;
		y2=y2-1;

		for(j=x1;j<=x2;++j) {
			for(k=y1;k<=y2;k++) {
				mesa[j][k]+=1;
			}
		}
		
	}
	
	for(i=0;i<100;i++) {
		for(j=0;j<100;j++) {
			cont=cont+mesa[i][j];
		}
	}
	printf("%d\n",cont);
}