#include <stdio.h>

//ESCRIBIR UN PROGRAMA QUE CALCULE LA POTENCIA DE UN NÚMERO INTRODUCIENDO EL NÚMERO BASE Y EL EXPONENTE.
int main(){
	int num_base,exponente,i;
	int resultado_potencia;
	
	printf("Digite un numero: ");
	scanf("%d", &num_base);
	printf("Digite un exponente: ");
	scanf("%d", &exponente);
	//coloco un límite en los exponentes
	
		
		for (i = 0; i < exponente; i++)
		{
			resultado_potencia *= num_base;
		}
		
		printf("Numero base: %d.\nNumero exponente: %d.",num_base,exponente );
		printf("Resultado final: %d",resultado_potencia);
		
	
	return 0;
}
