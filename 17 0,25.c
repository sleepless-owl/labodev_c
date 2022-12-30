#include <stdio.h>

int main(){ 
float a,sum=0,t=2;
printf("sayi girin");
scanf("%f",&a);
while(t<a){
	sum=sum+(1/t);
	t=t+2;
}
printf("toplam=%f",sum);
	

	
	
	
	return 0;
}
