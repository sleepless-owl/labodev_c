#include <stdio.h>

int main(){
	int say,say2=0,a;
	printf("write a number");
	scanf("%d",&say);
	a=say;
    for(say;say>0;){
    	say2=(say%10)+(say2*10);
    	say=say/10;
	}
	if(a==say2)printf("sayi polndrimo");
	else printf("polindrom değil");
	
	
	
	
	
	
	return 0;
}
