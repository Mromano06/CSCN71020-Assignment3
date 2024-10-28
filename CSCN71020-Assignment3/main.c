#include <stdio.h>

// mattr - 71020f24 - assignment3

// main class (mostly empty)

#define MAX_ARRAY_LENGTH			8

int main(void) {

	char array1[MAX_ARRAY_LENGTH] = { 0 }, array2[MAX_ARRAY_LENGTH] = { 0 };

	//rockPaperScissors(&array1, &array2);


	return 0;

}

char rockPaperScissors(char* array1, char* array2) {

	char sArray[] = { 's','c','i','s','s','o','r','s' };
	char pArray[] = { 'p','a','p','e','r' };
	char rArray[] = { 'r','o','c','k' };
	char returnArray[] = { 0 };

	if (array1 != NULL && array2 != NULL) {

		if (array1 != sArray || array1 != pArray || array1 != rArray || array2 != sArray || array2 != pArray || array2 != rArray) {

			if ((array1[1] == 'r' && array2[0] == 's') || (array1[0] == 'p' && array2[0] == 'r') || (array1[0] == 's' || array2[0] == 'p')) {

				returnArray[0] = '1';
			}

			if ((array1[0] == 'p' && array2[0] == 's') || (array1[0] == 'r' && array2[0] == 'p') || (array1[0] == 's' || array2[0] == 'r')) {

				returnArray[0] = '2';
			}

			if (array1[0] == array2[0]) {

				returnArray[0] = 'd';
			}

		}

	}

	//else if ()


	return rArray[0];
}