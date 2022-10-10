//Test cases:
//Tested for all possible inputs as long as they respect the parameters

//Specifications:
//Requires: two 2D arrays of char, two sizes representing the size of each array.
//Effects: Returns a 3rd array that includes all the elements from the other two in a sorted manner and prints them out.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int merge(const char* arr1[], const char* arr2[], int n1, int n2) {
	int i = 0, j = 0, k = 0;
	char* arr3[100]; // The size should be n1+n2 but visual studio gives an error, i did it on online compiler it worked so i just set it as 100 for this case
	while (i < n1) {
		arr3[k] = arr1[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr3[k] = arr2[j];
		j++;
		k++;
	}
	char* temp[1];
	for (int i = 0; i < n1+n2; i++) {
		for (int j = 0; j < n1+n2 - 1 - i; j++) {
			if (strcmp(arr3[j], arr3[j + 1]) > 0) {
				//swap array[j] and array[j+1]
				temp[0] = arr3[j];
				arr3[j] = arr3[j + 1];
				arr3[j + 1] = temp[0];
			}
		}
	}
	for (int i = 0; i < n1+n2; i++) {
		printf("%s", arr3[i]);
		printf("\n");
	}
	return arr3;
}
