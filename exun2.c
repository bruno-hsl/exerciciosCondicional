#include <stdio.h>

int main(){
    /*Construa um algoritmo que, dado quatro valores, A, B, C e D,
     o algoritmo imprima o maior e o menor valor. 
     */

    //Declarar variaveis
    float a, b, c, d;

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Digite o valor de C: ");
    scanf("%f", &c);

    printf("Digite o valor de D: ");
    scanf("%f", &d);

    //saida de dados
    if(a > b && a > c && a > d){
        printf("Maior valor: %2.f /", a);
    }
    else if(b > a && b > c && b > d){
        printf("Maior valor: %2.f /", b);
    }
    else if(c > a && c > b && c > d){
        printf("Maior valor: %2.f /", c);
    }
    else{
        printf("Maior valor: %2.f /", d);
    }

    if(a < b && a < c && a < d){
        printf("Menor valor: %2.f /", a);
    }
    else if(b < a && b < c && b < d){
        printf("Menor valor: %2.f", b);
    }
    else if(c < a && c < b && c < d){
        printf("Menor valor: %2.f", c);
    }
    else{
        printf("Menor valor: %2.f", d);
    }
   
    
   
    
    
    return 0;
}