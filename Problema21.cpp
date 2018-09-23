#include <stdio.h>
#include <conio.h>

int arre1[5][5],arre2[5][5];
int escalar,x,y;

main(){
	
	printf("Problema 21: Matriz por un escalar\n");
	printf("Dame un n%cumero escalar:",163);
	scanf("%d",&escalar);
	
	for(x=1;x<3;x++)
	{
		
		for(y=1;y<3;y++)
		{
			printf("Dame el n%cumero  para la localidad [%d] [%d]: ",163,x,y);
			scanf("%d",&arre1[x][y]);	
		}
				
	}
	
	printf("\nPara la matriz resultante: \n");
	
		
		for(x=1;x<3;x++)
		{
			for(y=1;y<3;y++)
			{
				arre2[x][y]=arre1[x][y]*escalar;
				printf("Para la localidad [%d][%d] la multiplicacion por %d es: %d \n ",x,y,escalar,arre2[x][y]);
				
			}
		
		
		}
		
		
	getch();
	return 0;
	
}
