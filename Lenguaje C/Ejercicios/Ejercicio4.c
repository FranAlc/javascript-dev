#include <stdio.h>

//DESARROLLAR UN DIAGRAMA DE FLUJO PARA QUE PIDA 2 VALORES Y REALIZA EL CÁLCULO (A+B)*(A-B).

int main(){
	int a,b,calculo;
	
	printf("Digite el valor de A:")	;
	scanf("%d",&a);
	printf("Digite el valor de B:");
	scanf("%d",&b);
	
	calculo = (a+b) * (a-b);
	
	printf("El resultado del calculo es: %d", calculo);
	
	return 0;
}
