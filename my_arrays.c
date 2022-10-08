#include <stdio.h>
#define SIZE 10;
// printArray Function:
// Specifications:
// Requires: A 1D array of integers
// Effects: Prints each index and its value 
void printArray(int* arr) {
	for (size_t i = 0; i < SIZE i++) {
		printf("%d %d\n", i, arr[i]);
	}
}
//printHistogram function:
// Specifications:
// Requires: A 1D array of integers
// Effects: Prints each index, its value and a number of stars corresponding to the value
void printHistogram(int* arr) {
    for (int i = 0; i < SIZE i++) {
        printf("%d %d",i,arr[i]);
        printf(" ");
        for (int j = 0; j < arr[i]; ++j) {
            printf("*");
        }
        printf("\n");
    }
}
//swapValues function:
//Test cases:
//1- Tested for index out of bounds
//Specifications:
//Requires: a 1D Array of integers, two indices in range of the size.
//Effects: Swaps the values in these two given indices and exits if an out of bounds index is given.
void swapValues(int* arr, int i, int j) {
    if (i > 9 || i < 0) {
        exit();
    }
    else if (j > 9 || j < 0) {
        exit();
    }
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
//bubbleSort Function:
//Specifications:
//Requires: a 1D Array of integers
//Effects: Sorts the array in increasing order.
void bubbleSort(int* arr) {
    for (int i = 0; i < 10-1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swapValues(arr,j, j+1);
            }
        }
    }
}
//median Function:
//Specifications:
//Requires: a 1D array of integers
//Effects: returns the median (middle element) of the array
int median(int arr[]) {
    bubbleSort(arr);
    int half = arr[(10 / 2) - 1];
    return half;
}
//mode Function:
// Test cases:
// 1- If two elements have the same frequency
//Specifications:
//Requires: a 1D array of integers
//Effects: Returns the value that is most frequent in that array.
int mode(int* arr) {
    int max = 0;
    int mode;
    for (int i = 0; i < SIZE i++) {
        int counter = 0;
        for (int j = i+1; j < SIZE j++) {
            if (arr[i] == arr[j]) {
                counter++;
            }
        }
        if (counter > max) {
            max = counter;
            mode = arr[i];
        }
        // Need to check if all the elements are of the same frequency aswell
    }
    return mode;
}
//isSorted Function:
//Specifications:
//Requires: a 1D array of integers
//Effects: Returns 1 if the array is sorted and 0 otherwise.
int isSorted(int* arr) {
    int boole = 1;
    for (int i = 0; i < SIZE i++) {
        for (int j = i+1; j < SIZE j++) {
            if (arr[i] <= arr[j]) {
                boole = 1;
            }
            else if (arr[j] < arr[i]) {
                return 0;
            }
        }
    }
    return boole;
}