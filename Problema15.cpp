#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int x,y;
main(){
	
	printf("Problema 15:Men%c (Divisiones,Empleados,Ventas)\n",163);
	printf("\t\tM %C N U\n",144);
	puts("1.-Norte");
	puts("2.-Sur");
	puts("3.-Occidente");
	puts("4.-Centro");
	printf("Selecciona una zona: ");
	scanf("%d",&x);
	switch(x){
		
		
		case 1:
				system("cls");
				printf("\tDivisi%cn Norte\n",162);
				printf("\tEMPLEADOS\n");
				printf("1.-Fernando\n");
				printf("2.-Ingrid\n");
				printf("3.-Brandon\n");
				printf("Selecciona un empleado: ");
				scanf("%d",&y);
				
					
				switch(y){
					
					
					case 1:
						printf("La venta de Fernanda es: $10,000\n");
						break;
						
					case 2:
						printf("La venta de Ingrid es: $18,000\n");	
						break;
						
					case 3:
						printf("La venta de Brandon es: $1000\n");
						break;	
						
					default:
						printf("Opci%cn no valida",162);	
						break;
				}
				
				break;
					
		
		case 2:
			
				system("cls");
				printf("\tDivisi%cn Sur\n",162);
				printf("\tEMPLEADOS\n");
				printf("1.-Axel\n");
				printf("2.-Isabel\n");
				printf("3.-Sofia\n");
				printf("Selecciona un empleado: ");
				scanf("%d",&y);
				
				switch(y){
					
					case 1:
						printf("La venta de Axel es: $10,000\n");
						break;
						
					case 2:
						printf("La venta de Isabel es: $18,000\n");	
						break;
					case 3:
						printf("La venta de Sofia es: $1000\n");
						break;	
						
					default:
						printf("Opci%cn no valida",162);	
						break;
					
						
				}
				
				break;
					
				
		case 3:
			
				system("cls");
				printf("\tDivisi%cn Occidente\n",162);
				printf("\tEMPLEADOS\n");
				printf("1.-Jesus\n");
				printf("2.-Andrea\n");
				printf("3.-Pablo\n");
				printf("Selecciona un empleado: ");
				scanf("%d",&y);
				
				switch(y){
					
					case 1:
						printf("La venta de Jesus es: $10,000\n");
						break;
						
					case 2:
						printf("La venta de Andrea es: $18,000\n");	
						break;
						
					case 3:
						printf("La venta de Pablo es: $1000\n");	
						break;
					default:
						printf("Opci%cn no valida",162);
						break;	
					
						
				}
				
				
				break;	
				
		case 4:
			
				system("cls");
				printf("\tDivisi%cn Centro\n",162);
				printf("\tEMPLEADOS\n");
				printf("1.-Isac\n");
				printf("2.-Labna\n");
				printf("3.-David\n");
				printf("Selecciona un empleado: ");
				scanf("%d",&y);	
				
				switch(y){
					
					case 1:
						printf("La venta de Isac es: $10,000\n");
						break;
						
					case 2:
						printf("La venta de Labna es: $18,000\n");
						break;	
						
					case 3:
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
