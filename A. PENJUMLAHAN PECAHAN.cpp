#include <stdio.h>
int main(){
	long long int a,b,c,d;
	long long e,f;
	scanf("%lld %lld",&a,&b);
	scanf("%lld %lld",&c,&d);
	//menyimpan b dan d
	long long int sb=b;
	long long int sd=d;
	//mencari fpb dari b dan d 
	while (sd!=0){//loop akan jalan selama d!=0
		long long int temp =sd;//menyimpan d di tempat kosong
		sd=sb%sd;//d menjadi sisa dari b/d
		sb=temp;//menukar b dengan d
	}
	long long int kpk=(d*b)/sb;//rumus kpk(b,d)
	long long int x = (kpk/b)*a;//mencari e= a/b
	long long int y = (kpk/d)*c;//mencari f= c/d
	e=x+y;//menjumlahkan a+c
	f=kpk;//menyimpan kpk(b,d)
	
	long long int fpb=e;//membuat varabel fpb untuk mencari fpb(e,f)agar bisa lebih sederhana
	long long int penyebut_sederhana=f;//menyimpan f di variabel baru
	//loop fpb biasa
	while (penyebut_sederhana!=0){
		long long int temp = penyebut_sederhana;
		penyebut_sederhana=fpb%penyebut_sederhana;
		fpb=temp;
	}
	//menyederhanakan e dan f dengan fpb(e,f)
	e/=fpb;
	f/=fpb;
	//output e f
	printf("%lld %lld\n",e,f);
	
	return 0;
}
