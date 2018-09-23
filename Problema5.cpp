#include <conio.h>
#include <stdio.h>

int n,p;

main(){
	
	printf("Problema 5: Factorial de un n%cmero\n",163);
	printf("Dame un n%cmero: ",163);
	scanf("%d",&n);

	p=n*(n-1);
	n=n-2;
	while(n>0){
		
		p=p*n;	
		n--;	
	}
		printf("El factorial del n%cmero es: %d",163,p);
	getch();

	
}
