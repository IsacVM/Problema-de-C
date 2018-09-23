#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>

int main(){
	
	float prome;
	float n1;
	float n2;
	float n3;
	
	printf("Problema 3: Promedio de 3 n%cmeros \n",163);
	printf("Escribe tu primera calificaci%cn:",163);
	scanf("%f",&n1);
	printf("Escribe tu segunda calificaci%cn:",163);
	scanf("%f",&n2);
	printf("Escribe tu tercera calificaci%cn:",163);
	scanf("%f",&n3);
	prome=(n1+n2+n3)/3;
	printf("Tu promedio es:%f",prome);
	
	getch();
	return 0;
	
		
	
}
