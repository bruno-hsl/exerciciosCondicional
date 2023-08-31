#include <stdio.h>
#include <math.h>

int main(){
    /*Escreva um algoritmo que leia um número e imprima a raiz
     quadrada do número caso ele seja positivo ou igual a zero
    e o quadrado do número caso ele seja negativo.
    */

    //Declarar variaveis
    double num, r1, r2;

    printf("Digite um numero: ");
    scanf("%lf", & num);

    //operacoes
    r1 = sqrt(num);
    r2 = num * num;

    //saida de dados
    if(num >= 0){
        printf("Raiz quadrada: %2.lf", r1);
    }
    else{
        printf("Quadrado do numero: %2.lf", r2);
    }
    return 0;
}