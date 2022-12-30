#include <stdio.h>
#include <stdio.h>

int main(){
	int i,a,b,c=0;
	printf("write a number");
	scanf("%d",&a);
	for(i=1;i<a;i++){
		for (b=1;b<i;b++){
			if(i%b==0){
			c=c+b;
			}
		}
		if(c==i){
			printf("%d\n",i);
		}
		c=0;
}	
	
	
	
	
	
	
	
	
	
	return 0;
}
