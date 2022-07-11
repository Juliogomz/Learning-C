/*Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A fórmula
de conversão é: C = 5.0 (F * 32.0)/9.0, sendo C a temperatura em Celsius e F a temperatura em
Fahrenheit.*/

#include <stdio.h>
int main(void){
float tempF;
float conversao;

printf("Digite o valor de uma temperatura em Fahrenheit:\n");
scanf("%f", &tempF);
conversao = (tempF - 32) * 5/9 ;

printf("O valor da temperatura convertida em graus Celsius eh:\n%.2fC", conversao);
return 0;
}