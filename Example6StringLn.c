#include <stdio.h>
//By Lucas Frias
int main(){
	//ask for a string
	printf("Enter string:");
	char userString[100];//we gotta set a hard buffer size-- this is it!
	int lengthCounter = 0;//the length
	fgets(userString, 100, stdin);//fgets is used here just so that i can cast it well into a char Array
				      //since we can't use String types yet
	for (int i = 0; i < 100; i++){//let's iterate!!!
		printf("%c", userString[i]);//ket's print the char!!!!
		if (userString[i] != '\n'){//if it's not the line break!
			lengthCounter++;//let's iterate ++
		}
		else {
			break; //otherwise we break and we set the length
		}
	}
	printf("Length: %d", lengthCounter); //printlength, exit
	return 0;
}
