#include <stdio.h>
#include <math.h>
  
  int main()
  {
  	int a,t,c,sum=0;
  	printf("write first number");
  	scanf("%d",&a);
  	
  	
	for(t=1;t<=a;t++)
	 {
	 c=2;
	 while (c<=t){
	 	if(t%c==0){
	 		if(t==c)
	 		{
			 sum=sum+t;
			 break;}
	 		else {
			 break;}
	 	
	 	
	 	
		 }
		 else{c++;
		 }
	 	
	 	
	 	
	 }	
	 	
	 	
	 	
	 	
	 	
	 }
	  	
  	printf("%d",sum);
  	
  return 0;	
  }
