#include <stdio.h>

int main () {

	int i,j,a,b,c,d,cont=0;
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF) {
		if(a==0 && b==0 && c==0 && d==0)
				break;

		for(i=a;i<b;i++) {
			cont++;
			if(i>=40)
				i=0;
		}
		for(i=b;i>c;i--) {
			cont--;
			if(i<=0)
				i=40;
		}
		for(i=c;i<d;i++) {
			cont++;
			if(i>=40)
				i=0;
		}
		
		printf("%d\n",(cont*9)+1080);
		cont=0;
	}
}