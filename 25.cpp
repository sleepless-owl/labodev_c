#include <stdio.h>
int main()
{
	int a,b,c,d;
    printf("sayi 1");
    scanf("%d",&a);
	printf("sayi 2");
    scanf("%d",&b);
    for(c = 1; c <= a || c <= b; c++) {
    if( a%c == 0 && b%c == 0 )
     {
	   d = c;}
	}
	printf("%d",d);
    return 0;
}
