//Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

#include <stdio.h>
int main(void){
int num1,num2, num3;
printf("Digite o primeiro numero inteiro:\n");
scanf("%d", &num1);
printf("Digite o segundo numero inteiro:\n");
scanf("%d", &num2);
printf("Digite o terceiro numero inteiro:\n");
scanf("%d", &num3);

printf("Os tres numeros inteiros inseridos foram respectivamente:\n%d, %d e %d",num1, num2, num3);
return 0;
}