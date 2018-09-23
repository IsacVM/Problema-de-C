#include <stdio.h>
#include <ctype.h>
#include <conio.h>


int main()
{

	int num1;
	int num2;
	int suma;
	char num;
	
	printf("Problema 2: Suma de 2 n%cmeros \n",163); 
	printf("Dame un n%cmero \n",163); 
	scanf("%c",&num); 
	
	if(!isdigit(num) ){
		
		printf("El dato no es un n%cmero",163);	
		
	}else{
			
		num1=num-'0';	
		printf("Dame otro n%cmero \n",163);
		scanf("%i",&num2);
		suma=num1+num2;
		printf("La suma de los n%cmeros es:%i \n",163,suma);	
		
	}

	
	getch();
	return 0;
	
	
}
