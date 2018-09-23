#include <stdio.h>
#include <conio.h>

int n,ptc,x;

main(){
	printf("Problema 7: Potencias de la 0 a la 5 de cualquier n%cmero\n",163);
	printf("Dame un n%cmero: ",163);
	scanf("%d",&n);
	printf("%d^0=0\n",n);
	x=1;
	ptc=n*x;
	printf("%d^%d=%d\n",n,x,ptc);
	x++;
	while(x<=5){
			
		ptc=ptc*n;
		printf("%d^%d=%d\n",n,x,ptc);
		x++;
		
	}		
	
	getch();
	return 0;	
}
