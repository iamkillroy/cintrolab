#include <stdio.h>
//Lucas Frias
int main() {
	//start with our hex number
	int hexNumber;
	printf("Please enter a hex number>");
	scanf("%x", &hexNumber);//scan the input AS A HEX NUMBER
	printf("%b\n", hexNumber);//return it in BINARY FORMATTING with the %b specificer
				  //that was easy
	return 0;
}
