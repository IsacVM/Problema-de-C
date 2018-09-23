#include <stdio.h>
#include <conio.h>
#include <math.h>

int a,b,c,d;
float x1,x2,r,m;

main(){
	printf("Problema 9:F%cmula General\n",162);
	printf("Dame el valor de a: \n");
	scanf("%d",&a);
	printf("Dame el valor de b: \n");
	scanf("%d",&b);
	printf("Dame el valor de c: \n");
	scanf("%d",&c);
	
	if(a>0){
		
			d=2*a;
			m=(b*(-1));
			m=m/d;
			r=((b*b)-(4*a*c));
			if(r>=0){
				r=(sqrt(r)/d);
				x1=m+r;
				x2=m-r;
				printf("x1 es igual a: %.2f\n",x1);
				printf("x2 es igual a: %.2f",x2);
			}else{
				
				r=r*(-1);
				r=(sqrt(r)/d);
				printf("x1 es igual  %.2f + %.2f i\n",m,r);
				printf("x2 es igual %.2f - %.2f i",m,r);
			}
		
		
	}
	
	
	
	getch();
	return 0;
}
