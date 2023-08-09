#include <stdio.h>

//Ingresar 3 números e imprimir el doble, el triple y la mitad de cada uno.
//Franco Galan
int main(){
int num1,num2,num3;
float mitad;

printf("Digite el primer Numero: ");
scanf("%d",&num1);
printf("Digite el segundo Numero: ");
scanf("%d",&num2);
printf("Digite el tercer Numero: ");
scanf("%d",&num3);
if((num1 > 0) && (num2 > 0) && (num3 > 0)){

//Numero 1
printf("\nNumero 1: %d", num1);
printf("\nEl doble de %d es: %d",num1,num1*2);
printf("\nEl triple de %d es: %d",num1,num1*3);
mitad = (float)(num1) / 2;
printf("\nLa mitad de %d es: %.1f",num1,mitad);

//Numero 2
printf("\n\nNumero 2: %d", num2);
printf("\nEl doble de %d es: %d",num2,num2*2);
printf("\nEl triple de %d es: %d",num2,num2*3);
mitad = (float)(num2) / 2;
printf("\nLa mitad de %d es: %.1f",num2,mitad);

//Numero 3
printf("\n\nNumero 3: %d", num3);
printf("\nEl doble de %d es: %d",num3,num3*2);
printf("\nEl triple de %d es: %d",num3,num3*3);
mitad = (float)(num3) / 2;
printf("\nLa mitad de %d es: %.1f",num3,mitad);
}
else{
	printf("No se aceptan numeros con valor a cero.\n\n");
}




return 0;
}
