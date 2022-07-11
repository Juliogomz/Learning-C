/*Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula de
conversão é: C = K - 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.*/

#include <stdio.h>
int main(void){
float tempK;
float conversao;

printf("Digite o valor de uma temperatura em graus Kelvin:\n");
scanf("%f", &tempK);
conversao = tempK - 273.15;
printf("O valor da temperatura em graus Celsius eh:\n%.2fC ",conversao);
return 0;
}