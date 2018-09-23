#include <stdio.h>
#include <conio.h>
#include <windows.h>

int x;

main(){
	
	printf("Problema 13:Imprimir del 1 al 100 (while)\n");
	x=1;
	while(x<=100){
		
		printf("%d\t",x);
		x++;
		Sleep(50);
		
	}

	getch();
	return 0;
}
