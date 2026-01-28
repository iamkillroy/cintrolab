#include <stdio.h>
#include <stdbool.h>
//By Lucas Frias
int main(){
	bool quit = false; //assign bool loop
	char operationPrompt = 'n'; //prompting for question
	int operand1; //set up numbers and result
	int operand2;
	int result;
	//intro
	printf("Welcome to the Calculator - type q to quit\n");
	while (!quit) {//while no quit
		printf("Enter operation\n");
		//wait for user input, the space with %c
		//makes sure to handle whitespace and newline
		scanf(" %c", &operationPrompt);
		//if quit quit
		if (operationPrompt == 'q') {
			quit = true;
			continue; //break from loop immediately
		}
		//prompt first operand
		printf("Enter 1st operand\n");
		//notice the &, we are casting into the 
		//address of the variable with &
		scanf(" %d", &operand1);
		//c and s are cubed and squared, don't ned
		//a second operand for that
		if (operationPrompt != 'c'  && operationPrompt != 's') {
			printf("Enter 2nd operand\n");
			//get input again
			scanf(" %d", &operand2);
		}
		//switch case to match each number case
		switch (operationPrompt) {
			case '+'://chars use SINGLE QUOTES
				result = operand1 + operand2;
				break;//break required
				      //or every case will match
			case '-':
				result = operand1 - operand2;
				break;//same
			case '/':
				result = operand1 / operand2;
				break;
			case '*':
				result = operand1 * operand2;
				break;
			case 's':
				result = operand1 * operand1;
				break;//squared
			case 'c':
				result = operand1 * operand1 * operand1;
				break;//cubed
			}
		printf("Result: %d\n", result);//print formatted result
	}
	return 0;
}
