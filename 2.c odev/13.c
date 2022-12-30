#include <stdio.h>
#include <stdio.h>

int main(){
	int i,say,b,sum=0,a,ca=1;
	printf("write a number");
	scanf("%d",&say);
	b=say;
	while(b>0){
		a=b%10;
		b=b/10;
		for(a;a>0;a--){
			ca=ca*a;
			
		}
	
		sum=sum+ca;
		ca=1;
	
	}
	if(say==sum)printf("strong number");
	else printf("not srong number");
		
	
	
	
	
	
	
	
	
	return 0;
}
