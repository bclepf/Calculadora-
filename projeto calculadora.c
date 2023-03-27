#include <stdio.h>

void main()
{
    float numero1, numero2, resultado;
    char operacao;
    
    printf("Digite o primeiro numero:");
    scanf("%f", &numero1);
    
    printf("Digite o segundo numero:");
    scanf("%f", &numero2);
    
    printf("Qual operacao deseja realizar? (+, -, *, /):");
    scanf(" %c", &operacao);
   
    switch(operacao){
    case '+':
    resultado=numero1+numero2;
    printf("O resultado eh %f", resultado);
    break;
    
    case '-':
    resultado=numero1-numero2;
    printf("O resultado eh %f", resultado);
    break;
    
    case '*':
    resultado=numero1*numero2;
    printf("O resultado eh %f", resultado);
    break;
        
    case '/':
    resultado=numero1/numero2;
    printf("O resultado eh %f", resultado);
    break;
       
    default:   
    printf("Operacao invalida");
    }
    
}  
