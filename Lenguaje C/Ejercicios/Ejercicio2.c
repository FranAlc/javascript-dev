#include<stdio.h>
//Escribir un programa que lea exactamente 3 números y luego escriba la suma de todos ellos.

int main(){
int num1,num2,num3,suma_total;

printf("Digite el primer valor: ");    
scanf("%d",&num1);
printf("Digite el segundo valor: ");
scanf("%d",&num2);
printf("Digite el tercer valor: ");
scanf("%d",&num3);    
    
suma_total = num1 + num2 + num3;

printf("La suma total es: %d", suma_total);   

return 0;
}
