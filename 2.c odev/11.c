#include <stdio.h>
#include <stdio.h>

int main(){
	int a,b,c=0;
	printf("write a number");
	scanf("%d",&a);
	
	for (b=1;b<a;b++){
		if(a%b==0){
		c=c+b;
		}
	}
	if(c==a){
		printf("perfect number");
	}
	else{
		printf("not perfect");
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
