#include <stdio.h>

int main(){
	//set up an array with 10 number
	int array[10] = {500, 1, 255, 7, -12, 40, 42, 999, 50, 227};
	int smallestFound = 32767;// largest number in c
	int largestFound = -32767;//smallest number in c
	// * for ints-- then when comparing, we can be sure it's the TRUE smallest/largest
	// there's defintely a keyword for this
	bool quit = false;//don't quit!!!
	char prompt;//one char for the prompt
	//now we itetrate through all the elements and sort them
	for (int i = 0; i < 10; i++){
		if (array[i] < smallestFound){
			//or if the array value is less than the smalelst found
			//it's the new smallest found
			smallestFound = array[i];
		}
		if (array[i] > largestFound) {
			//same here, it's bigger than the largest found
			//so it's the largest found
			largestFound = array[i];
		}

	}
	while (!quit){ //don't quit yet
		printf("Enter m,n, or b:");
		scanf(" %c", &prompt);//get char prompt
		switch (prompt){//switch for prompt
			case 'm'://output largest
				printf("%d\n", largestFound);
				break;
			case 'n'://smallest
				printf("%d\n", smallestFound);
				break;
			case 'b'://both, in order from smallest to largest
				printf("%d %d\n", smallestFound, largestFound);
				break;
			case 'q'://quit case
				quit = true;
				break;
		}
	}
	return 0;//it was all good!
}
