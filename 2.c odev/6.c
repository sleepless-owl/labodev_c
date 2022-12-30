#include <stdio.h>
#include <math.h>
  
  int main()
  {
  	int a,b,c;
  	printf("write first number");
  	scanf("%d",&a);
  	printf("write second number");
  	scanf("%d",&b);
  	
  	if (a>b)
    c=a;
	else
	c=b;
	
	while(1){
		if(c%a==0 && c%b==0)
		{
		printf("%d",c);
		break;}
		else{c++;
		}
	}
	
	  	
  	
  	
  return 0;	
  }
