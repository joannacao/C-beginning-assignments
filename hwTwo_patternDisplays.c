#include <stdio.h>

int main(){
	int starsPerRow = 0; //initialized- stands for number of * to be printed in the current row
	for (int row = 0; row < 10; row++){ //to iterate down rows
		starsPerRow++; //increments the number of stars before beginning to print them out
		printf("\n"); //moves onto a new line to start the next row
		for (int i = 0; i < starsPerRow; i++){
			printf("*"); //prints a certain number of * depending on the value of starsPerRow
		}
	}

	//the next loop basically just reverses the previous one
	//starsPerRow currently has the value of 10

	printf("\n\n");
	for (int row2 = 0; row2 < 10; row2++){
		starsPerRow--; //decrements the number of stars before beginning to print them out
		printf("\n");
		for (int index = 0; index <= starsPerRow; index++){
			printf("*"); //now starts off by printing 10 * in the first row
		}
	}
}


