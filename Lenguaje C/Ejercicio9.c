#include <stdio.h>
#include <math.h>
//DESARROLLE UN ALGORITMO QUE PERMITA DETERMINAR EL ÁREA Y VOLUMEN DE UN CILINDRO DADO SU RADIO Y SU ALTURA.


int main(){
	const double pi = 3.14159;
	double area, volumen;
	float radio, altura;
	printf("\tDeterminar Area y Volumen de un Cilindro.");
	printf("\nDigite radio: ");
	scanf("%f",&radio);
	printf("\nDigite altura: ");
	scanf("%f",&altura);
	
	area = 2 * pi * radio * (radio + altura);
	printf("El Area del Cilindro es: %lf",area );
	
	volumen = pi * (radio*radio) *altura;
	printf("\nEl Volumen del Cilindro es: %lf",volumen );
	
	
	return 0;
}
