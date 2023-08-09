#include <stdio.h>

//DESARROLLE UN ALGORITMO QUE CALCULE LA HIPOTENUSA DE UN TRIÁNGULO RECTÁNGULO CONOCIDAS LAS LONGITUDES DE SUS CATETOS.

int main(){
	float longitud_cateto1,longitud_cateto2, hipotenusa;
	
	printf("Digite la longitud del primer cateto ->  ");
	scanf("%f", &longitud_cateto1);
	
	printf("Digite la longitud del segundo cateto ->  ");
	scanf("%f", &longitud_cateto2);
	
	hipotenusa = sqrt(longitud_cateto1 * longitud_cateto1 + longitud_cateto2 * longitud_cateto2);
	
	printf("El valor de la hipotenusa es -> %.2f", hipotenusa );
	
	return 0;
}
