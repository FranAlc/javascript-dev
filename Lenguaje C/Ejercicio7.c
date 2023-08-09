#include <stdio.h>

//INGRESAR UN IMPORTE EN PESOS Y MOSTRAR EL 80%, 20% Y 15 % DE DICHO VALOR

int main(){
	float importe_pesos;
	
	printf("Digite el importe en pesos que va a relizar: $");
	scanf("%f",&importe_pesos);
	
	printf("Valor en pesos ingresado: $%.2f\n\n",importe_pesos);
	printf("El 80 por ciento: %.2f\n\n",importe_pesos * 80 / 100);
	printf("El 20 por ciento: %.2f\n\n",importe_pesos * 20 / 100);
	printf("El 15 por ciento: %.2f\n\n",importe_pesos * 15 / 100);
	
	
	
	return 0;
}
