#include<stdio.h>
#include<stdlib.h>

int main(){
	setlocale(0,"portuguese");
    float number1, number2, result;
    int operation;
    
    printf("O que você quer calcular? 1-Soma; 2-subtração; 3-multiplicação; 4-divisão/What do you want to calculate? 1-Sum; 2-subtraction; 3-multiplication; 4-division \n");
    printf("Digite abaixo o número referente a operação desejada/Enter the number for the desired operation below \n");
    scanf("%d", &operation);

    printf("qual o primeiro número?/whats the first number? \n");
    scanf("%f", &number1);
    
    printf("qual o segundo número?/whats the second number? \n");
    scanf("%f", &number2);
    
    switch(operation){
    	case 1:
    	result = number1 + number2;
    	printf("o resultado da ação escolhida é:/The result for the chosen action is: %f", result);
    	break;
    	case 2:
    	result = number1 - number2;
    	printf("o resultado da ação escolhida é:/The result for the chosen action is: %f", result);
    	break;
		case 3:
    	result = number1 * number2;
    	printf("o resultado da ação escolhida é:/The result for the chosen action is: %f", result);
    	break;
		case 4:
    	result = number1 / number2;
    	printf("o resultado da ação escolhida é:/The result for the chosen action is: %f", result);
    	break;
	}
	printf("deseja continuar ou sair? Digite 1 para continuar ou 2 para sair: \n");
	scanf("%d", &operation);
	if(operation==1){
		goto
	}
	else(operation==2){
		
	}
}
