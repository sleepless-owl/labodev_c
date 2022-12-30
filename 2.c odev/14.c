#include <stdio.h>
#include <stdio.h>

int main(){
	int i,say,b,sum=0,a,ca=1,t;
	printf("write a number");
	scanf("%d",&say);
	for(t=1;t<say;t++){
		b=t;
		while(b>0){
			a=b%10;
			b=b/10;
			for(a;a>0;a--){
				ca=ca*a;
				
			}
		
			sum=sum+ca;
			ca=1;
		
		}
		if(t==sum)printf("\n%d",t);
		
		sum=0;
	}
	
	
	
	
	
	
	
	
	return 0;
}
