#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	
	int i,ar[a];
	int maxvalue=0;
	for(i=0;i<a;i++){
		scanf("%d",&ar[i]);
		if(ar[i]>maxvalue){
			maxvalue=ar[i];
		}
	}
	int freq[maxvalue+1];
	for(i=0;i<=maxvalue;i++){
		freq[i]=0;
	}
	for(i=0;i<a;i++){
		freq[ar[i]]++;
	}
	
	int modus=0;
	int maxmodus=0;
	for(i=0;i<=maxvalue;i++){
		if(freq[i]>maxmodus){
			maxmodus=freq[i];
			modus=i;
		}else if(freq[i]==maxmodus&&i>modus){
			modus=i;
		}
	}
	printf("%d",modus);
	
	
	
	
	return 0;
}
