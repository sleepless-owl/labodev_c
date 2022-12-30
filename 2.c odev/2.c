#include<stdio.h>
#include <math.h>
int main ()
{
	float a,b,c,del,k1,k2;
	printf("a degeri girin\n");
	scanf("%f",&a);
	printf("b  degeri girin\n");
	scanf("%f",&b);
	printf("c  degeri girin\n");
	scanf("%f",&c);
	del=b*b-4*a*c;
	k1=(-1*b-sqrt(del))/(2*a);
	k2=(-1*b+sqrt(del))/(2*a);
	if(del>0){
		printf("%f\n",k1);
			printf("%f",k2);
	}
	else if(del==0){
		printf("%f",k1);
	}
	else if(del<0){
		printf("kök yok");
	}
	
	
	
	return 0;
}
