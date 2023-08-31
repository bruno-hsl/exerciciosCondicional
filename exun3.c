#include <stdio.h>

int main(){
    /*Dados três valores A, B e C, construa um algoritmo,
     que imprima os valores de forma ascendente (do menor para o maior).
     */

    //Declarar variaveis
    int a, b, c;

    printf("Digite o valor de A : ");
    scanf("%d", &a);

    printf("Digite o valor de B : ");
    scanf("%d", &b);

    printf("Digite o valor de C : ");
    scanf("%d", &c);

    //saida de dados
    if(a > b && b > c){
        printf("%d %d %d", c, b, a);
    }
    else if(a > c && c > b){
        printf("%d %d %d", b, c, a);
    }
    else if(b > a && a > c){
        printf("%d %d %d", c, a, b);
    }
    else if(b > c && c > a){
        printf("%d %d %d", a, c, b);
    }
    else if(c > a && a > b){
        printf("%d %d %d", b, a, c);
    }
    else if(c > b && b > a){
        printf("%d %d %d", a, b, c);
    }
   
    return 0;
}