#include<stdio.h>
#include<stdlib.h>

int main(){
	setlocale(0,"portuguese");
    float number1, number2, result;
    int operation;
    
    printf("O que voc� quer calcular? 1-Soma; 2-subtra��o; 3-multiplica��o; 4-divis�o/What do you want to calculate? 1-Sum; 2-subtraction; 3-multiplication; 4-division \n");
    printf("Digite abaixo o n�mero referente a opera��o desejada/Enter the number for the desired operation below \n");
    scanf("%d", &operation);

    printf("qual o primeiro n�mero?/whats the first number? \n");
    scanf("%f", &number1);
    
    printf("qual o segundo n�mero?/whats the second number? \n");
    scanf("%f", &number2);
    
    switch(operation){
    	case 1:
    	result = number1 + number2;
    	printf("o resultado da a��o escolhida �:/The result for the chosen action is: %f", result);
    	break;
    	case 2:
    	result = number1 - number2;
    	printf("o resultado da a��o escolhida �:/The result for the chosen action is: %f", result);
    	break;
		case 3:
    	result = number1 * number2;
    	printf("o resultado da a��o escolhida �:/The result for the chosen action is: %f", result);
    	break;
		case 4:
    	result = number1 / number2;
    	printf("o resultado da a��o escolhida �:/The result for the chosen action is: %f", result);
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
