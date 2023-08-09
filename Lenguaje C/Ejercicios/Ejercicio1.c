#include <stdio.h>
#include <ctype.h>
//Escribir un algoritmo que pida,nombre,apellido,telefono y edad de una persona y luego muestre por pantalla.

int main(){
char nombre[20],apellido[20];
int telefono,edad;

printf("Digite nombre: ");
scanf("%s", &nombre);
printf("Digite apellido: ");
scanf("%s", &apellido);
printf("Digite telefono: ");
scanf("%d", &telefono);
printf("Digite edad: ");
scanf("%d", &edad);

printf("\nDatos de la persona:\n");
printf("Nombre: %s",nombre);
printf("\nApellido: %s",apellido);
printf("\nTelefono: %d",telefono);
printf("\nEdad: %d\n",edad);

system("pause");
return 0;
}
