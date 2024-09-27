#include <stdio.h>

int main(){
	int a,b,c,i,j;
	scanf ("%d %d",&a,&b);
	int ar[a][b];
	for (i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&ar[i][j]);
		}
	}
	for (i=0;i<b;i++){
		for(j=a-1;j>=0;j--){
			printf("%d ",ar[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
