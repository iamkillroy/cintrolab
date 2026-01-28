#include <stdio.h>
//By Lucas Frias
//inspiration used for this code
//https://www.geeksforgeeks.org/c/c-bitmasking//

int main(){
	
	printf("Enter integer");
	int userInteger;
	int byteLocation;
	scanf("%d", &userInteger);
	//ket's scan the input and get an integer
	while (true){
		//gimme a bit
		printf("Enter bit > ");
		scanf("%d", &byteLocation);
		//okay okay kemme try to explain this
		//so first enough is the 1
		//1 in binary is 0x00000001
		//basically, by doing the left shift we move that 1 to where the location is
		//like if we want bit 4 we bit shift left so it goes (here's a nibble)
		// 0001 0010 0100 1000
		// boom clap that's cool
		// now we use & to compare
		// so basically here's hpw that works
		// let's say we have 12 and wanna check bit 3
		// so 12 is 0b00001100 and our mask is 0b00001000
		// that means we do an & comparision (like and gates
		// now because the rest of the values are 0, when & o the mask it will just become 0
		// 1 & 0 = 0 and 0 & 0 = 0
		// but where our 1 is (based on where we moved it) it will either be 1 or 0
		// because we're providing a 1 at that location the true value will be reflected as a number
		// where if it's false it's 0
		// and if it's true it will become 2^n
		// that's what we're checking here
		if ((userInteger & (1 << byteLocation)) != 0){
			printf("TRUE");
		}
		else{
			printf("FALSE");
		}
	}
	return 0;
}
