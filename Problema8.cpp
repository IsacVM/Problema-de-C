#include <stdio.h>
#include <conio.h>

int x,y;

main(){
	
	
	printf("Problema 8: Resoluci%cn de ecuaciones\n",162);
	printf("Dame un valor para 'x': ");
	scanf("%d",&x);
	
	if(x>2){
		
		printf("Ecuaci%cn para x>2: y=x^2+3x-2\n",162);
		y=x*x+3*x-2;
		printf("Valor de y: %d",y);
		
	}else if(x<2){
		printf("Ecuaci%cn para x<2: y=2x^2+x+8\n",162);
		y=2*x*x+x+8;
		printf("Valor de y: %d",y);
		
	}else
		
		printf("No hay soluci%cn",162);
	
	getch();
	return 0;
}
