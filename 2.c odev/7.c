#include <stdio.h>
#include <math.h>
  
  int main()
  {
  	int a,t,c;
  	printf("write first number");
  	scanf("%d",&a);
  	
  	
	for(t=1;t<=a;t++)
	 {
	 c=2;
	 while (c<=t){
	 	if(t%c==0){
	 		if(t==c)
	 		{
			 printf("\n %d",t);
			 break;}
	 		else {
			 break;}
	 	
	 	
	 	
		 }
		 else{c++;
		 }
	 	
	 	
	 	
	 }	
	 	
	 	
	 	
	 	
	 	
	 }
	  	
  	
  	
  return 0;	
  }
