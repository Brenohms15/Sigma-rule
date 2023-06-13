
#include <stdio.h>

float valorveiculo;
float valordesconto;
float valorpagar;

float alcool;
float gasolina;
float diesel;

int main()
{
    printf("Concessionária de veículos CARANGO.\n");
    printf("Informe o valor do veiculo: ");
    scanf("%f", &valorveiculo);
    
    
    alcool = valorveiculo - valorveiculo * 25 / 100;
	gasolina = valorveiculo - valorveiculo * 21 / 100;
	diesel = valorveiculo - valorveiculo * 14 / 100;
       
    
    printf("\nO valor do Veiculo com desconto de Alcool e: %f!(25%%)", alcool);
    printf("\nO valor do Veiculo com desconto de Gasolina e: %f!(21%%)", gasolina);
    printf("\nO valor do Veiculo com desconto de Diesel e: %f!(14%%)\n", diesel);
    
    
    return 0;
}
