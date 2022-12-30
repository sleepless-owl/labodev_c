#include <stdio.h>

int main(){  
int a,t;  
printf("sayi girin");    
scanf("%d",&a); 
t=a;   
while(a>10)    
{    
t=t%10;
a=a/10;

    
    
}    
    printf("son sayi %d\n",t);
    printf("ilk sayi %d",a);

return 0;  
}  
