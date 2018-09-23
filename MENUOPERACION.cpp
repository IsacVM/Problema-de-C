#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int n1,n2,x;
float resultado;


main(){
	printf("Problema : Men%c de operaciones\n",163);
	printf("\t\tM %C N U\n",144);
	printf("1.-Suma\n");
	printf("2.-Resta\n");
	printf("3.-Multiplicaci%cn\n",162);
	printf("4.-Divisi%cn\n",162);
	printf("Selecciona una operaci%cn: ",162);
	scanf("%d",&x);
	
	switch(x){
		
			case 1:
				
				system("cls");
				printf("\tSUMA\n");
				printf("Dame un n%cmero: \n",163);
				scanf("%d",&n1);	
				printf("Dame otro n%cmero: \n",163);
				scanf("%d",&n2);
				resultado=n1+n2;
				printf("La suma de %d y %d es: %.2f",n1,n2,resultado);
				
				break;
			
			case 2:
				
				system("cls");
				printf("\tRESTA\n");
				printf("Dame un n%cmero: \n",163);
				scanf("%d",&n1);	
				printf("Dame otro n%cmero: \n",163);
				scanf("%d",&n2);
				resultado=n1-n2;
				printf("La resta de %d y %d es: %.2f",n1,n2,resultado);
				
				break;
				
			case 3:
				
				system("cls");
				printf("\tMULTIPLICACION\n");
				printf("Dame un n%cmero: \n",163);
				scanf("%d",&n1);	
				printf("Dame otro n%cmero: \n",163);
				scanf("%d",&n2);
				resultado=n1*n2;
				printf("La multiplicaci%cn de %d y %d es: %.2f",162,n1,n2,resultado);
				
				break;
				
			case 4:
				
				system("cls");
				printf("\tDIVISION\n");
				printf("Dame un n%cmero: \n",163);
				scanf("%d",&n1);	
				printf("Dame otro n%cmero: \n",163);
				scanf("%d",&n2);
				resultado=n1/n2;
				printf("La divisi%cn de %d y %d es: %.2f",162,n1,n2,resultado);					
		
				break;
		
		
			default:
				
				printf("Opci%cn no valida",162);
				break;
				
					
		
		}
	

	getch();
	return 0;	
	

	
}
