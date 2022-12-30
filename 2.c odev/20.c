#include<stdio.h>
#include<math.h>

int main(){
	
	int i,x,n;
	double sum=0;
	printf("\nsayi giriniz:");
	scanf("%d", &x);
	printf("\nTerim sayisi giriniz:");	
	scanf("%d", &terimSayisi);
	
	
	for(i=1;i<=2*n-1;i+=2){	
		if( i==1 )
			toplam += x;
		if( i==3 )
			toplam -= x*x*x;
		if( i>3 )
			toplam += pow(x,i);
	}
	
	printf("\nToplam: %.2lf", toplam);	
	
	return 0;
}
