#include<stdio.h>

int main(){

   float altura;
   float alturaMin = 1.80;

    printf("Digite aqui sua altura:\n");
    scanf("%f", &altura);

    if(altura > alturaMin){
        printf("voce é grande parabens");
    }
    else{
        printf("voce é pequeno que triste");
    }

}