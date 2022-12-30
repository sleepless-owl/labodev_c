#include <stdio.h>
#include <math.h>
int main()
{
    int a,ilks, sons,bas, swap;
    printf("sayý girin ");
    scanf("%d", &a);
    sons = a % 10;
    bas  = log10(a);
    ilks =  (a / pow(10, bas));
    swap  = sons;
    swap *= (int) round(pow(10, bas));
    swap += a % ((int)round(pow(10, bas)));
    swap -= sons;
    swap += sons;
    if(a==swap){
    	printf("palndromdur");
	}
	else{
		printf("palindrom degildir");
	}
    return 0;
}
