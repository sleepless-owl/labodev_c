#include <stdio.h>

int main(){  
int a,d,t;  
printf("sayi girin");    
scanf("%d",&d);    
for(t=0;d>0;t++)    
{    
a=d%2;    
d=d/2;    
}    
    
for(t=t-1;t>=0;t--)    
{    
printf("%d",a);    
}    
return 0;  
}  
