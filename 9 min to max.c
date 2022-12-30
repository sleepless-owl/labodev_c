#include <stdio.h>

int main(){
int a,b,t;

printf("lütfen sayi girin");
scanf("%d",&a);
printf("lütfen sayi girin");
scanf("%d",&b);
if(b<a)
{
t=a;
a=b;
b=t;
	}
	while (a<b)
	{
		printf("%d\n",a);
		a++;
	}
	
	
	
	return 0;
}
