#include<stdio.h>

int main(){
	
	int a,b,sayi,n,sum=0;
	printf("kademe yazýnýz");
	scanf("%d", &n);
	for(a=1;a<=n;a++){
		sayi=0;
		for(b=1;b<=a ;b++){
			sayi =sayi*10+1;
		}
		sum=sum+ sayi;
	}
	
	printf("%d",sum);
	return 0;
}
