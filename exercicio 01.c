#include<stdio.h>

int main(){

    int idade;
    char nome[50];

    printf("Digite o seu nome:\n");
    fgets(nome, 50, stdin);

    printf("Digite a sua idade:\n");
    scanf("%d", &idade);

    if(idade >= 18){
         printf("%s, voce é menor de idade", nome);
         printf("\n Sua idade é %d", idade);
    }
   else{
         printf("%s, voce é menor de idade", nome);
    }

}