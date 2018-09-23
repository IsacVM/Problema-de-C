#include <stdio.h>
#include <conio.h>

int a;
float s=0;
float p=0, arr[8];

main(){
	printf("Problema 17:Promedio de 5 n%cmeros con arreglos\n",163);
	for(a=1;a<6;a++){
		
		printf("Dame el elemento %d: ",a);
		scanf("%f",&arr[a]);
		s=(s+arr[a]);	
	}
	a--;
	p=(s/a);
	printf("El promedio es: %f",p);
	
	getch();
	return 0;
	
	
	
	
}
