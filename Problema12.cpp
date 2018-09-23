#include <stdio.h>
#include <conio.h>
#include <math.h>


int n,p;
float i,f,r;


main(){
	
	printf("Problema 12:Cuenta de Banco en un a%co\n",164);

	printf("Dame el deposito incial: ");
	scanf("%d",&p);
	printf("Dime cuantos a%cos llevas trabajando: ",164);
	scanf("%d",&n);
	printf("Dime el tanto %c anual: ",37);
	scanf("%f",&r);
	i=r/100;
	f=pow(double(1+i),n)*p;
	printf("Dinero acumulado: %.2f",f);
	
	getch();
	return 0;
	
	
	
	
	
}
