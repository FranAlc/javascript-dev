#include <stdio.h>
/*ESCRIBIR UN ALGORITMO QUE PIDA UNA CANTIDAD EN PESOS ARGENTINOS Y LA
CONVIERTA EN DÓLARES ESTADOUNIDENSES (1 DÓLAR ESTADOUNIDENSE = 15.40 PESOS
ARGENTINOS).*/

int main(){
	float valor_pesos = 15.40, valor_dolar = 1 , total_plata;
	
	printf("Digite una cantidad de pesos Argentinos: $");
	scanf("%f", &total_plata);
	
	printf("Convertir tu dinero a dolares: $%.2f",(total_plata / valor_pesos) * valor_dolar);
	
	return 0;
}

