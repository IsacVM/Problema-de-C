#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

char nombre[30];
char apP [30];
char apM [30];
char dia[3];
char mes[3];
char anio[5];
char RFC[50];
char RFC1[10];
char RFC2[10];
char apP1[2];
int i;

main(){
	
	printf("\tProblema: RFC\n");
	
	printf("Apellido Paterno: ");
	gets(apP);
	strncpy(RFC,apP,1);
	strupr(apP);
	
		for(i=strlen(apP);i>=1;i--){
					
			if((apP[i]=='A')||(apP[i]=='E')||(apP[i]=='I')||(apP[i]=='O')||(apP[i]=='U'))
			{
			
				apP1[0]=apP[i];
			
			}
		}
		
	printf("Apellido Materno: ");
	gets(apM);	
	
	printf("Nombre: ");
	gets(nombre);
	
	printf("Fecha de nacimiento\n");
	
	printf("Dia: ");	
	gets(dia);
	
	printf("Mes: ");	
	gets(mes);
	
	printf("A%co: ",164);	
	gets(anio);
		
	strcat(apP," ");
	strcat(apP,apM);
	strcat(apP," ");
	strcat(apP,nombre);
	
	strcat(RFC,apP1);
	strncpy(RFC1,apM,1);
	strcat(RFC,RFC1);
	strncpy(RFC2,nombre,1);
	strcat(RFC,RFC2);
	strcat(RFC,anio);
	strcat(RFC,mes);
	strcat(RFC,dia);
	
	printf("Nombre completo: %s \n",strupr(apP));
	printf("Tu RFC parcial es: %s",strupr(RFC));
	
	getch();
	return 0;
}


