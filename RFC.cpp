#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

char nombre[30];
char apP [30];
char apM [30];
char fechnac [7];
char RFC[50];
char RFC1[3];
char RFC2[3];
char RFC3[3];


main(){
	
	printf("Problema 22: Nombre completo con cadena de caracteres\n");
	
	printf("Apellido Paterno: ");
	gets(apP);
	strncpy(RFC1,apP,2);
	printf("Apellido Materno: ");
	gets(apM);
	strncpy(RFC2,apM,1);
	printf("Nombre: ");
	gets(nombre);
	strncpy(RFC3,nombre,1);
	printf("Fecha de nacimiento(aa/mm/dd): ");	
	gets(fechnac);

	strcat(apP," ");
	strcat(apP,apM);
	strcat(apP," ");
	strcat(apP,nombre);
	
	strcat(RFC,RFC1);
	strcat(RFC,RFC2);
	strcat(RFC,RFC3);
	strcat(RFC,fechnac);
	

	printf("Nombre completo: %s \n",strupr(apP));
	printf("Tu RFC es: %s",strupr(RFC));
	
	getch();
	return 0;
}


