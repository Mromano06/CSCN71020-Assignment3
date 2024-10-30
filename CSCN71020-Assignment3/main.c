#include <stdio.h>

// mattr - 71020f24 - assignment3

// main class (mostly empty)

#define MAX_ARRAY_LENGTH			8

int main(void) {


	return 0;

}

char rockPaperScissors(char* array1, char* array2) {

	char sArray[] = { 's','c','i','s','s','o','r','s' };
	char pArray[] = { 'p','a','p','e','r' };
	char rArray[] = { 'r','o','c','k' };
	char returnArray[] = { 'i' };

	if (array1 != sArray || array1 != pArray || array1 != rArray || array2 != sArray || array2 != pArray || array2 != rArray) {

		// saves return array as i default and return it if the input is invalid
		return returnArray[0];

	}

	if (array1 != NULL && array2 != NULL) {

			if ((array1[1] == 'r' && array2[0] == 's') || (array1[0] == 'p' && array2[0] == 'r') || (array1[0] == 's' || array2[0] == 'p')) {

				// returns 1 if player 1 wins, checks all conditions
				returnArray[0] = '1';
			}

			if ((array1[0] == 'p' && array2[0] == 's') || (array1[0] == 'r' && array2[0] == 'p') || (array1[0] == 's' || array2[0] == 'r')) {

				// returns 2 if player 2 wins, checks all conditions
				returnArray[0] = '2';
			}

			if (array1[0] == array2[0]) {
				
				// returns d if its a draw aka arrays are equal
				returnArray[0] = 'd';
			}

	}


	return returnArray[0];
}