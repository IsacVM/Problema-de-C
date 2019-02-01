#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define p printf 

unsigned int s=0;
int puntos[9];
int a=1;
int otc; 
main(){

	printf("\t\tProblema: Puntos por jornada\n\n");
	p("Intrucciones:\n");
	p("Selecciona una opci%cn: \n",162);
	p("3)Si el equipo gan%c = 3 puntos\n",162);
	p("1)Si el equipo empat%c = 1 punto\n",162);
	p("0)Si el equipo perdi%c = 0 puntos\n",162);
		
	do{
		p("\tJornada %d\n",a);
		scanf("%d",&otc);
		if((otc==3) || (otc==1) || (otc==0))
		{
			puntos[a]=otc;	
			s=(s+puntos[a]);
			a++;
		}else
			p("Dato no valido\n");
		
	}while(a<9);
					
	p("Los puntos totales de tu equipo son: %d",s);	
						
	getch();
	return 0;	
}
