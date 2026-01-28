#include <stdio.h>
#include <stdbool.h>
//By Lucas Frias
//inspiration used for this code
//https://www.geeksforgeeks.org/c/c-bitmasking//

int main(){
	//i'm not explaining most of this code because i did the same
	//on example 8 but
	int userInteger;
	int byteLocation;
	int overrideLocation;

	printf("Enter integer >");
	scanf("%d", &userInteger);
	printf("Enter bit > ");
	scanf("%d", &byteLocation);
	printf("Enter override > ");
	scanf("%d", &overrideLocation);
	if (overrideLocation == 1){
		//this is interesting to note, because we're doing the same thing but using or
		//to reflect the values of the values except as that location we wanna change
		//if we wanna set it as 1, because 1 + 0 = 1 and 1 + 1 = 1
		printf("%d\n", (userInteger | (1 << byteLocation)));
	}
	else {
		//but here we have to do something different with that ~
		//~ is the NOT operator. it will set the value here to do the reverse
		//so everything becomes 1 0b11111101 except that location. we "not" the whole number
		//and then we do a similar thing, where the AND comparision will reflect the original value except
		//at the actual locaton of the value where it will become either 0 or 1, however we set it.
		printf("%d\n",userInteger & ~(1 << byteLocation)); 
	}
	
	return 0;
}
