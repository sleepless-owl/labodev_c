#include <stdio.h>
int main()
{
    int a, sons,s0=0,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0;
    printf("sayý girin ");
    scanf("%d", &a);
	while (a>0){
		sons=a%10;
		a=a/10;
		if(sons==0){s0++;
		}
		if(sons==1){s1++;;
		}
		if(sons==2){s2++;
     	}
		if(sons==3){s3++;
		}
		if(sons==4){s4++;
		}
		if(sons==5){s5++;
		}
		if(sons==6){s6++;
		}
		if(sons==7){s7++;
		}
		if(sons==8){s8++;
		}
		if(sons==9){s9++;
		}
		
		
	}
	printf("sifir%d\n",s0);
		printf("bir%d\n",s1);
		printf("iki%d\n",s2);
		printf("uc%d\n",s3);
		printf("dort%d\n",s4);
		printf("bes%d\n",s5);
		printf("altý%d\n",s6);
		printf("yedi%d\n",s7);
		printf("sekiz%d\n",s8);
		printf("dokuz%d\n",s9);
	
    return 0;
}
