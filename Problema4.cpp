#include <stdio.h>
#include <conio.h>

int x;

main(){
	
	printf("Problema 4: Par o Impar\n");
	
	printf("Dame un n%cmero:",163);
	scanf("%d",&x);
	if(x%2==0){
		
		printf("El n%cmero %d es par",163,x);
	}else
		printf("El n%cmero %d no es par",163,x);
		
	
	getch();
	return 0;
	
	
	
}
