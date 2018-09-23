#include <stdio.h>
#include <conio.h>

int n1,n2,n3;

main(){
	printf("Problema 19:Ordenar n%cmeros de Mayor a menor\n",163);
	printf("Dame el primer n%cmero: \n",163);
	scanf("%d",&n1);
	printf("Dame el segundo n%cmero: \n",163);
	scanf("%d",&n2);
	printf("Dame el tercer n%cmero: \n",163);
	scanf("%d",&n3);
	
	if((n1>n2)&&(n2>n3)){
		printf("Mayor-menor: %d %d %d",n1,n2,n3);

	}else if((n1>n3)&&(n3>n2)){
		printf("Mayor-menor: %d %d %d",n1,n3,n2);
		
	}else if((n2>n1)&&(n1>n3)){ 
		printf("Mayor-menor: %d %d %d",n2,n1,n3);
		
	}else if((n2>n3)&&(n3>n1)){
		printf("Mayor-menor: %d %d %d",n2,n3,n1);
		
	}else if((n3>n1)&&(n1>n2)){
		printf("Mayor-menor: %d %d %d",n3,n1,n2);
		
	}else if((n3>n2)&&(n2>n1)){
		printf("Mayor-menor: %d %d %d",n3,n2,n1);
		
	}else if((n1==n2)&&(n2>n3)){
		printf("Mayor-menor: %d %d %d",n1,n2,n3);
		
	}else if((n1==n2)&&(n2<n3)){
		printf("Mayor-menor: %d %d %d",n3,n2,n1);
		
	}else if((n1==n3)&&(n3>n2)){
		printf("Mayor-menor: %d %d %d",n1,n3,n2);
		
	}else if((n1==n3)&&(n3<n2)){
		printf("Mayor-menor: %d %d %d",n2,n1,n3);
		
	}else if((n2==n3)&&(n2>n1)){
		printf("Mayor-menor: %d %d %d",n3,n2,n1);
		
	}else if((n2==n3)&&(n2<n1)){
		printf("Mayor-menor: %d %d %d",n1,n2,n3);
		
	}else{
		printf("Mayor-menor: %d %d %d",n1,n2,n3);
		
	}
		
	
	getch();
	return 0;
}
