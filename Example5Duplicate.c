#include <stdio.h>
//By Lucas Frias
int main(){
	//make an array size (made dynamically
	int arraySize;
	//ask what size it should be
	printf("How big is the array?");
	scanf("%d", &arraySize);//get that input
	int userArray[arraySize];//set it up!!! - this could not work and crash if it's too big
	for (int i = 0; i < arraySize; i++){//let's loop through the array
		int tempArrayValue;//and prompt what number the user wants for inside of it
		printf("Enter element %d:", i);//tell me what element you want
		scanf("%d", &tempArrayValue);//scan input
		userArray[i] = tempArrayValue;
	}
	//let's make an array that's the same size as the other array
	//this array will be able to contain every single number 
	//even if all number as unique ex {1,2,3} etc
	int alreadyUsed[arraySize];
	int duplicateCount = 0;//duplicate counter
	for (int i = 0; i < arraySize; i++){
		int itemFound = userArray[i]; //set a founditem in the user's Array
		for (int j = 0; j < arraySize; j++){//now let's go through all the previously usedArray stuff
			if (itemFound == alreadyUsed[j]){//if there's a match!!!!
				duplicateCount++;//then we'll add a duplicate
			}
		}
		alreadyUsed[i] = itemFound;//then let's add it to the array of stuff already used.
					   //we're just transferring data from one array to an another array 
					   //and seeing if it's already there
					   //but now that i'm writing this comment i realized there's no
					   //need for implementing a new array when i could just use the old one
					   //but c'est la vie
	}
	printf("Duplicates found: %d", duplicateCount); //print duplicates (duh)
}
