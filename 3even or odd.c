//iki sayinin toplamý

#include <stdio.h>

int main()
{
	
	int say;
	printf("sayiyi  girin");
	scanf("%d",&say);
	if (say%2==0)
	{
		printf("sayi çifttir");
	}
	else
	{
		printf("sayi tektir");
	}
	return 0;
}
