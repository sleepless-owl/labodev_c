#include <stdio.h>

int main(){ 
int a,sum=1;
printf("sayi girin");
scanf("%d",&a);
while(a>1){
	sum=sum*a;
	
	a--;
}
printf("%d",sum);
	

	
	
	
	return 0;
}
