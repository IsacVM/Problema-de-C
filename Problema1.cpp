#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>
#define PI 3.1416

int main()
{

	float r;
	float area;

	printf("Problema 1: Area de un circulo \n"); 
	printf("Escribe un radio: \n"); 
	scanf("%f",&r); 
	area=pow(double(r),2)*PI;
	printf("El area del circulo es:%f",area);		
	
	getch();
	return 0;
	
	
}
