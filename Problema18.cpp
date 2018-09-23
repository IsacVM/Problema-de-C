#include <stdio.h>
#include <conio.h>

float gastos[15];
float suma=0;
float promedio;
int x;

main(){
	
	printf("Problema 18: Gastos Mensuales de una a%co y promedio anual con arreglos\n",164);

	for(x=1;x<13;x++){
		
		printf("Dame el Gasto del mes [%d]: ",x);
		scanf("%f",&gastos[x]);
		suma=(suma+gastos[x]);
		
	}
	
	printf("\nGastos almacenados:\n");
	
	for(x=1;x<13;x++){
		
		
		printf("Los gastos alamacenados en el mes [%d] son: %.2f\n",x,gastos[x]);
			
	}
	
	
	promedio=(suma/12);
	
	printf("\nEl promedio de los gastos es: %f",promedio);
	

	getch();
	return 0;
}
