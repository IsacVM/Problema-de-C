#include <stdio.h>
#include <conio.h>
#include <string.h>

char nom[50];


main(){
	
	printf("Problema 22: Nombre completo con cadena de caracteres\n");
	
	printf("Nombre completo: ");
	scanf("%s",&nom);
	/*gets(nom);*/
	printf("Apellido Paterno: ");
	scanf("%s",&nom);
	/*gets(nom);*/
	printf("Apellido Materno: ");
	scanf("%s",&nom);
	/*gets(nom);*/
	printf("Nombre completo: %s \n",nom);
	printf("Fecha de nacimiento(dd/mm/aaa): ");

	
	getch();
	return 0;
}
