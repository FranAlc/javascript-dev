#include <stdio.h>
//Mejorando el ejercicio anterior agregando un IF para evitar la división con cero.

int main(){
	
int a,b,aux;
	
	printf("Digite dos valores: \n");
	scanf("%d %d", &a, &b);
	
if(b != 0 ){

	
printf("\nResultado SUMA: %d", a + b);
printf("\nResultado RESTA: %d", a - b);
printf("\nResultado MULTIPLICACION: %d", a * b);
printf("\nResultado DIVISION: %d", a / b);

aux = a ;
a = b;
b=aux;	

printf("\nValores Intercambiados A Y B: %d %d",a,aux );	
	
}
else{
	printf("No se puede ingresar valores 0. ");
	printf("\nVuelva a intentarlo...\n");
}	
	return 0;
}
