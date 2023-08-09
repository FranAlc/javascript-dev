#include<stdio.h>
//ESCRIBIR UN ALGORITMO EN EL CUAL SE INGRESAN DOS VARIABLES A Y B. REALICE LA
//SUMA, LA RESTA, LA DIVISIÓN Y LA MULTIPLICACIÓN DE A CON B. MUESTRE LOS CUATRO
//RESULTADOS POR PANTALLA. LUEGO INTERCAMBIE EL VALOR DE LAS DOS VARIABLES Y
//MOSTRAR LOS VALORES INTERCAMBIADOS.

int main(){
int a,b,aux;
	
	printf("Digite dos valores: \n");
	scanf("%d %d", &a, &b);
	
printf("\nResultado SUMA: %d", a + b);
printf("\nResultado RESTA: %d", a - b);
printf("\nResultado MULTIPLICACION: %d", a * b);
printf("\nResultado DIVISION: %d", a / b);

aux = a ;
a = b;
b=aux;	

printf("\nValores Intercambiados A Y B: %d %d",a,aux );			
return 0;		
}

