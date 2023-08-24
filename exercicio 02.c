#include<stdio.h>

int main(){

    float salarioMin = 1320.00;
    float salario;

    printf("Digite o seu salario:\n");
    scanf("%f", &salario);
    
    if(salario > salarioMin){
        printf("seu salario está acima do salario minimo");
        printf("\nseu salario é de %.2f", salario);
    } 
    else{
        printf("seu salario esá abaixo do salario minimo");
    }
    
}