#include <stdio.h>
#include <stdbool.h>
//By Lucas Firas

bool isPrime(int n){
	//uhg this is tough to explain
	//so int in is the number we wanna know is prime
	//okay now we start our iterator at 2, and go up
	//until when a * a = n (GCF) -- such as 4 * 4 = 16
	//afterwards, all the next greatest numbers such as 
	//8 * 2 uses a previous smaller integer (2)
	//and 2 is the start because every number has 1 as a factor
	for (int a=2;a*a <= n; a++){
		//okay so tldr now let's just see if this number % a leads to 
		//a real 'whole' number, like 2 or 5
		//so like with my 16 example
		//16 % 3 = 1 but 16 % 4 = 0
		if (n % a == 0) {
			return false;//we have met the not prime condition, it terminate
		}
	}
	return true; //otherwise return true
}
int main() {
	//start with an empty number
	int numberRange = 0;
	printf("Enter a number:");
	scanf("%d", &numberRange); //get the number!!!
	//check for EVERY PRIME NUMBER in the range from 0 to that number
	//so if 64 we go through 1, 3, 5, 7, etc etc
	//and we use our prime check function
	for (int i = 0; i < numberRange; i++) {
		//if the function returns true, then return that number and a newline
		if (isPrime(i)){printf("%d\n", i);}
	}
	return 0;
}
