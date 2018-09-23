#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int var,otc;

int main()
{
	
	do
	{
			
			printf("\t\t\tM %c N U \n",144);
			printf("1.-Altas\n");
			printf("2.-Bajas\n");
			printf("3.-Cambios\n");	
			
			printf("Seleccione una Opci%cn: ",162);
			scanf("%d",&var);
			
				switch(var)
				{
					case 1:
						
							printf("Seleccionaste 'Altas'\n");
							break;
						
					case 2:
							printf("Seleccionaste 'Bajas'\n");
							break;
					
					case 3:	
					
							printf("Seleccionaste 'Cambios'\n");
							break;
						
					default:
					
							printf("No existe opci%cn\n",162);
							break;		
					
				}
				
				
				printf("Deseas repetir el proceso: 1=SI   2=NO\n");
				scanf("%d",&otc);
				system("cls");
						
				
	}while(otc==1);
	
	getch();
	return 0;
	
	
	
	
}

