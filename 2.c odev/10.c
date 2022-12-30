#include <stdio.h>
#include <math.h>
  
  int main()
  {
  	int a,b,c,d,sum=0,t;
  	printf("write n \n");
  	scanf("%d",&a);
  	for(t=1;t<a;t++){
	  
  	b=log10(t)+1;
  	d=t;
  	 while(d>0)
  	{
  		c=d%10;
  		d=d/10;
  		sum=pow(c,b)+sum;
  		
  		
  		
  		

	}
	if(t==sum)printf("%d \n",t);
	
 sum=0;	
}
  return 0;	
  }
