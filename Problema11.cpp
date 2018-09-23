#include <stdio.h>
#include <conio.h>

int si=3000;
int incre,sf,anios;

main(){
	
	printf("Problema 11: Sueldos con Incremento\n");
	printf("Dime cuantos anios llevas trabajando: ");
	scanf("%d",&anios);
	if((anios>=0) && (anios<=1)){
	
		printf("No hay incremento\n");
		printf("Sueldo final: %d",si);		
		
	}else if((anios>=2)&&(anios<=5)){
		
		incre=si*0.10;
		sf=si+incre;
		printf("El incremento fue del 10%c: %d \n",37,incre);
		printf("Sueldo final: %d",sf);
		
	}else if((anios>=6)&&(anios<=10)){
		
		incre=si*0.15;
		sf=si+incre;
		printf("El incremento fue del 15%c: %d \n",37,incre);
		printf("Sueldo final: %d",sf);
		
	}else{
		incre=si*0.20;
		sf=si+incre;
		printf("El incremento fue del 20%c: %d \n",37,incre);
		printf("Sueldo final: %d",sf);
		
		
	}
	getch();
	return 0;
	
	
}
