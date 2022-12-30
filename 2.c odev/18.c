#include<stdio.h>
int main(){	
	int i,a;
	
	for(i=1;a<15;i++){		
		if(i%2==1 ){
			printf("1"); 			
			for(a=2;a<=i;a++){
				if(a%2==0)
					printf("0");
				else
					printf("1");
			}
		}
		
		else{
			printf("0");			
			for(a=2;a<=i;a++){
				if(a%2==0)
					printf("1");
				else
					printf("0");
			}
		}							
		printf("\n");
	}
	
	return 0;
}
