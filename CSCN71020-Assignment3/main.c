#include <stdio.h>

// mattr - 71020f24 - assignment3

// main class (mostly empty)

#define MAX_ARRAY_LENGTH			8

int main(void) {

	char array1[MAX_ARRAY_LENGTH] = { 0 }, array2[MAX_ARRAY_LENGTH] = { 0 };

	//rockPaperScissors(&array1, &array2);


	return 0;

}

char rockPaperScissors(char array1[], char array2[]) {

	char rArray[] = { 0 };

	if (array1 != NULL && array2 != NULL) {

		if ((array1[0] == 'r' && array2[0] == 'p') || (array1 == 'p' && array2[0] == 'r') || (array1[0] == 's' || array2[0] == 'p')) {

			rArray[0] = '1';
		}

	}

	//else if ()


	return rArray[0];
}