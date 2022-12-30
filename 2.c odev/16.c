#include<stdio.h>
#include<math.h>

int main(){
	int n,a;
	printf("1 - x^2/2! + x^4/4! - ...\n");
	printf("\nx degeri giriniz: ");
	scanf("%d", &a);
	printf("kademe giriniz: ");
	scanf("%d", &n);
	
	int i,c,f, sira=2; 
	double sum= 1;
	
	for( i=2 ; i<=(n-1)*2 ; i+=2 ){
		
		c = 1 , f = 1;
		while( c <= i ){
			f = f* c;
			c++;
		}
		if(sira%2==0){
			sum -= pow(a,i) / f;
		}
		else{
			sum += pow(a,i) / f;
		}
		sira++;
	}

	
	printf("\nToplam: %.3lf", sum);
	
	return 0;
}
