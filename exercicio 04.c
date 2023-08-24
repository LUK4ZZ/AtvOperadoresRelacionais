#include<stdio.h>

int main(){

    int peso;

    printf("Digite aqui seu peso:\n");
    scanf("%d", &peso);

    if(peso >= 60){
        printf("Seu peso está acima de 60kg");
        printf("\nSeu peso atual é de %dkg", peso);
    
    } else{
        printf("Seu peso está abaixo de 60kg");
        printf("\nSeu peso atual é de %dkg", peso);
    }

}
