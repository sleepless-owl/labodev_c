#include <stdio.h>

int main(){
int a,b,t;

printf("lütfen sayi girin");
scanf("%d",&a);
printf("lütfen sayi girin");
scanf("%d",&b);
printf("lutfen sayi girin");
scanf("%d",&t);
if(a>b && a>t)
{printf("en buyuk sayi %d",a);

	}
	if(b>a && b>t)
{printf("en buyuk sayi %d",b);

	}
	if(t>b && t>a)
{printf("en buyuk sayi %d",t);

	}

	
	
	
	return 0;
}
