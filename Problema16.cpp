#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

char x;
char y;
main(){
	
	printf("Problema 15:Men%c (Divisiones,Empleados,Ventas)\n",163);
	printf("\t\tM %C N U\n",144);
	puts("N.-Norte");
	puts("S.-Sur");
	puts("O.-Occidente");
	puts("C.-Centro");
	printf("Selecciona una zona: ");
	x=getche();
	x=toupper(x);
	switch(x){
		
		
		case 'N':
				system("cls");
				printf("\tDivisi%cn Norte\n",162);
				printf("\tEMPLEADOS\n");
				printf("a.-Fernando\n");
				printf("b.-Ingrid\n");
				printf("c.-Brandon\n");
				printf("Selecciona un empleado: ");
				scanf("%c",&y);
				y=tolower(y);
				
					
				switch(y){
					
					
					case 'a':
						printf("La venta de Fernanda es: $10,000\n");
						break;
						
					case 'b':
						printf("La venta de Ingrid es: $18,000\n");	
						break;
						
					case 'c':
						printf("La venta de Brandon es: $1000\n");
						break;	
						
					default:
						printf("Opci%cn no valida",162);	
						break;
				}
				
				break;
					
		
		case 'S':
			
				system("cls");
				printf("\tDivisi%cn Sur\n",162);
				printf("\tEMPLEADOS\n");
				printf("a.-Axel\n");
				printf("b.-Isabel\n");
				printf("c.-Sofia\n");
				printf("Selecciona un empleado: ");
				scanf("%c",&y);
				y=tolower(y);
				
				
				switch(y){
					
					case 'a':
						printf("La venta de Axel es: $10,000\n");
						break;
						
					case 'b':
						printf("La venta de Isabel es: $18,000\n");	
						break;
					case 'c':
						printf("La venta de Sofia es: $1000\n");
						break;	
						
					default:
						printf("Opci%cn no valida",162);	
						break;
					
						
				}
				
				break;
					
				
		case 'O':
			
				system("cls");
				printf("\tDivisi%cn Occidente\n",162);
				printf("\tEMPLEADOS\n");
				printf("a.-Jesus\n");
				printf("b.-Andrea\n");
				printf("c.-Pablo\n");
				printf("Selecciona un empleado: ");
				scanf("%c",&y);
				y=tolower(y);
				
				switch(y){
					
					case 'a':
						printf("La venta de Jesus es: $10,000\n");
						break;
						
					case 'b':
						printf("La venta de Andrea es: $18,000\n");	
						break;
						
					case 'c':
						printf("La venta de Pablo es: $1000\n");	
						break;
					default:
						printf("Opci%cn no valida",162);
						break;	
					
						
				}
				
				
				break;	
				
		case 'C':
			
				system("cls");
				printf("\tDivisi%cn Centro\n",162);
				printf("\tEMPLEADOS\n");
				printf("a.-Isac\n");
				printf("b.-Labna\n");
				printf("c.-David\n");
				printf("Selecciona un empleado: ");
				scanf("%c",&y);
				y=tolower(y);
				
				switch(y){
					
					case 'a':
						printf("La venta de Isac es: $10,000\n");
						break;
						
					case 'b':
						printf("La venta de Labna es: $18,000\n");
						break;	
						
					case 'c':
						printf("La venta de David es: $1000\n");
						break;	
						
					default:
						printf("Opci%cn no valida",162);
						break;	
					
						
				}
			
								
				break;
		
		default:
		
				printf("Opci%n no valida",162);
				break;		
		
		
		
		
	}
	
	getch();
	return 0;
	
}
